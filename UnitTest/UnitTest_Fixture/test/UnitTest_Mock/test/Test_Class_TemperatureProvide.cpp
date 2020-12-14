#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <iostream>

#include "../core/TemperatureProvide.hpp"
#include "../src/Client.hpp"

using namespace ::testing;
using namespace std;

// 创建mock来绕过TemperatureProvide中需要用到的实际生产环境
// 需要Mock的函数必须是虚函数，这样才支持多态
class MockTemperatureProvide : public TemperatureProvide
{
public:
    MOCK_METHOD(bool, GenerateSecretKey, (), (override));
    MOCK_METHOD(bool, InitServerConnection, (), (override));
    MOCK_METHOD(void, GetIndoorsTemperature, (int &degrees), (override));
    MOCK_METHOD(void, GetOutdoorsTemperature, (int &degrees), (override));
};

TEST(ClientTest, getTemperature)
{
    MockTemperatureProvide mockTP;
    EXPECT_CALL(mockTP, GenerateSecretKey()).Times(1).WillOnce(Return(true));    
    EXPECT_CALL(mockTP, InitServerConnection()).Times(2);
    EXPECT_CALL(mockTP, GetOutdoorsTemperature(_)).Times(1);
    EXPECT_CALL(mockTP, GetIndoorsTemperature(_)).Times(1);
    
    Client client(&mockTP);
    client.getThetemperature();
}

