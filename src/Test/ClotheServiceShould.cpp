#include <gtest/gtest.h>
#include "pch.h"
#include "../../src/presentation/data/ClotheService.cpp" 
#include "../../src/model/IClotheService.cpp"




class ClotheServiceShould : public ::testing::Test {
public:
    
    
};

TEST(ClotheServiceShould, Return_100_Mao_ShortSleeve_Shirt_Normal) {
    ClotheService service;
    EXPECT_EQ(100, service.getShirtStock(MAO, SHORT, NORMAL));
}

TEST(ClotheServiceShould, Return_100_Mao_ShortSleeve_Shirt_Premium) {
    ClotheService service;
    EXPECT_EQ(100, service.getShirtStock(MAO, SHORT, PREMIUM));
}

TEST(ClotheServiceShould, Return_150_NormalNeck_ShortSleeve_Shirt_Normal) {
    ClotheService service;
    EXPECT_EQ(150, service.getShirtStock(NORMALNECK, SHORT, NORMAL));
}

TEST(ClotheServiceShould, Return_150_NormalNeck_ShortSleeve_Shirt_Premium) {
    ClotheService service;
    EXPECT_EQ(150, service.getShirtStock(NORMALNECK, SHORT, NORMAL));
}

TEST(ClotheServiceShould, Return_75_Mao_LongSleeve_Shirt_nORMAL) {
    ClotheService service;
    EXPECT_EQ(75, service.getShirtStock(MAO, LONG, NORMAL));
}

TEST(ClotheServiceShould, Return_75_Mao_LongSleeve_Shirt_Premium) {
    ClotheService service;
    EXPECT_EQ(75, service.getShirtStock(MAO, LONG, PREMIUM));
}

TEST(ClotheServiceShould, Return_175_NormalNeck_LongSleeve_Shirt_Normal) {
    ClotheService service;
    EXPECT_EQ(175, service.getShirtStock(NORMALNECK, LONG, NORMAL));
}

TEST(ClotheServiceShould, Return_175_NormalNeck_LongSleeve_Shirt_Premium) {
    ClotheService service;
    EXPECT_EQ(175, service.getShirtStock(NORMALNECK, LONG, PREMIUM));
}

TEST(ClotheServiceShould, Return_750_Stretch_Premium) {
    ClotheService service;
    EXPECT_EQ(750, service.getPantStock(STRETCH, PREMIUM));
}

TEST(ClotheServiceShould, Return_750_Stretch_Normal) {
    ClotheService service;
    EXPECT_EQ(750, service.getPantStock(STRETCH, NORMAL));
}

TEST(ClotheServiceShould, Return_250_NormalFit_Normal) {
    ClotheService service;
    EXPECT_EQ(250, service.getPantStock(STANDARD, NORMAL));
}

TEST(ClotheServiceShould, Return_250_NormalFit_Premium) {
    ClotheService service;
    EXPECT_EQ(250, service.getPantStock(STANDARD, PREMIUM));
}