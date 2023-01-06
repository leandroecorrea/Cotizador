#include <gtest/gtest.h>
#include "pch.h"
#include "../../src/model/value_objects/Shirt.cpp" 



class ShirtShould : public ::testing::Test {
protected:

};

TEST(PantShould, ReturnAValidPrice_Normal_Short_Premium) {
    Shirt p(NORMALNECK, SHORT, PREMIUM, 100, 1);
    EXPECT_FLOAT_EQ(117, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Mao_Short_Premium) {
    Shirt p(MAO, SHORT, PREMIUM, 100, 1);
    EXPECT_FLOAT_EQ(120.51, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Normal_Long_Premium) {
    Shirt p(NORMALNECK, LONG, PREMIUM, 100, 1);
    EXPECT_FLOAT_EQ(130, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Mao_Long_Premium) {
    Shirt p(MAO, LONG, PREMIUM, 100, 1);
    EXPECT_FLOAT_EQ(133.9, p.getPrice());
}
TEST(PantShould, ReturnAValidPrice_Normal_Short_Normal) {
    Shirt p(NORMALNECK, SHORT, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(90, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Mao_Short_Normal) {
    Shirt p(MAO, SHORT, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(92.7, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Normal_Long_Normal) {
    Shirt p(NORMALNECK, LONG, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(100, p.getPrice());
}
TEST(ShirtShould, ReturnAValidPrice_Mao_Long_Normal) {
    Shirt p(MAO, LONG, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(103, p.getPrice());
}