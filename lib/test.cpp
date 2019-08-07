//
// Created by Nernandez Salas on 07/08/2019.
//

#include <gtest/gtest.h>
#include "Triangle.h"
#include "Date.h"
#include <string>
#include <gmock/gmock.h>

TEST(testTriangle, triangleWorks){
    Triangle test;
    std::string triangleType1 = "Equilateral";
    std::string triangleType2 = "Isosceles";
    std::string triangleType3 = "Scalene";

    ASSERT_FALSE( triangleType1 == test.triangle_type( 10.5000, 10.50000, 10.500 ));
    ASSERT_TRUE( triangleType2 == test.triangle_type( 5.85, 7.85, 7.8500 ));
    ASSERT_TRUE( triangleType3 == test.triangle_type( 5.856, 5.857, 5.858 ));
}

TEST(testDate, dateWorks){
    Date date1{1,12,1993};
    Date date2{}; // Current Date
    int number{1000000000};

    ASSERT_TRUE(date2.getDate() > date1.getDate());

    date1.incrementDate(number);

    ASSERT_FALSE(date2.getDate() > date1.getDate());
}