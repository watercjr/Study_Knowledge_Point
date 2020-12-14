#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "core/include/BasicIO.hpp"

class Mock_BasicIO : public BasicIO
{
public:
    MOCK_METHOD1(printRemain, void(const int remain));
};

TEST(Suit1, Case1)
{
    Mock_BasicIO mbaio;
    EXPECT_CALL(mbaio, printRemain(1));
    EXPECT_CALL(mbaio, printRemain(101));
    EXPECT_CALL(mbaio, printRemain(51));
    mbaio.add(1);
    mbaio.add(100);
    mbaio.subtract(50);
}
