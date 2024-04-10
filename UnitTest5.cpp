//
// pch.h
//

#pragma once

#include "gtest/gtest.h"
int maxSumArr(int arr[], int n);

//
// pch.cpp
//

#include "pch.h"
int maxSumArr(int arr[], int n) {
    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; i++) {
        max1 = max1 + arr[i];
        if (max1 < 0) {
            max1 = 0;
        }
        else if (max2 < max1) {
            max2 = max1;
        }
    }
    return max2;
}

#include "pch.h"

TEST(TestCaseName, TestName) {
   //第一个测试用例
   int arr[4] = {-5,3,2,4};
   EXPECT_EQ(9,maxSumArr(arr,4));
   EXPECT_TRUE(true);
   //第二个测试用例
   int arr1[5] = { -3,15,2,5,-7 };
   EXPECT_EQ(22, maxSumArr(arr1, 5));
   EXPECT_TRUE(true);
   //第三个测试用例
   int arr2[4] = {-4,9,2,4};
   EXPECT_EQ(15, maxSumArr(arr2, 4));
   EXPECT_TRUE(true);
   //第四个测试用例
   int arr3[7] = {-11,-5,-9,12,-2,-9};
   EXPECT_EQ(12, maxSumArr(arr3, 7));
   EXPECT_TRUE(true);
}
