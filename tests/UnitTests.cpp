#include "gtest/gtest.h"
#include "linklist/linklist.hpp"

TEST(dataStructuresTest, linkListTest)
{
    double b = 34;
    int a = 89;
    std::string str = "Hello";
    ds::Linklist list((void *)&a);
    list.Add((void *)&b);
    list.Add((void *)&str);
    std::cout << *(int *)list[0] << "\t" << *(double *)list[1] << "\t" << *(std::string *)list[2] << list.Length() << "\n";
    ASSERT_EQ(a, *(int *)list[0]);
    ASSERT_EQ(b, *(double *)list[1]);
    ASSERT_EQ("Hello", *(std::string *)list[2]);
    ASSERT_EQ(3, list.Length());
}