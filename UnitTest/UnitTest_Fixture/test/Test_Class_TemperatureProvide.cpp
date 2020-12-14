#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "core/TemperatureProvide.hpp"

// test fixture（继承自testing::Test的类） 只用于测试或摧毁你需要测试的对象
class TemperatureProvideTest : public ::testing::Test
{
public:
    TemperatureProvide temperatureProvide;
    TemperatureProvideTest()
    {
        TemperatureProvide temperatureProvide;
    }
    virtual ~TemperatureProvideTest()
    {
        // delete temperatureProvide;
    }

    // 也可以使用下面两个函数来准备和释放资源
/*
    void SetUp() override
    {
        temperatureProvide = new TemperatureProvide;
    }    
    void TearDown() override
    {
        delete temperatureProvide;
    }

*/
};


// 当使用了fixture时，这里需要使用TEST_F，而不是TEST
// 第一个参数是test fixture，第二参数是测试case名字（由你命名）
TEST_F(TemperatureProvideTest, CanProvideOutdoorsTemp)
{
    int num = 0;
    temperatureProvide.GetOutdoorsTemperature(num);
    EXPECT_EQ(7, num);
}


TEST_F(TemperatureProvideTest, CanProvideIndoorsTemp)
{
    int num = 0;
    temperatureProvide.GetIndoorsTemperature(num);
    EXPECT_EQ(30, num);
}