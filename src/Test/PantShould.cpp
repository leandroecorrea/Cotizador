#include <gtest/gtest.h>
#include "pch.h"
#include "../../src/model/value_objects/Pant.cpp" 
#include "../../src/model/value_objects/ClotheAbstract.cpp" 


class PantShould : public ::testing::Test {
protected:
   
};

TEST(PantShould, ReturnAValidPriceStretchAndPremium) {
    Pant p(STRETCH, PREMIUM, 100, 1);    
    EXPECT_FLOAT_EQ(114.4, p.getPrice());
}

TEST(PantShould, ReturnAValidPriceStandardAndPremium) {
    Pant p(STANDARD, PREMIUM, 100, 1);
    EXPECT_FLOAT_EQ(130, p.getPrice());    
}

TEST(PantShould, ReturnAValidPriceStandardAndNormal) {
    Pant p(STANDARD, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(100, p.getPrice());    
}

TEST(PantShould, ReturnAValidPriceStretchAndNormal) {
    Pant p(STRETCH, NORMAL, 100, 1);
    EXPECT_FLOAT_EQ(88, p.getPrice());
}