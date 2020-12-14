#include <iostream>
#include "linklist/linklist.hpp"
int main()
{
    int a = 89;
    double b = 34;
    std::string str = "Hello";
    ds::Linklist list((void *)&a);
    list.Add((void*)&b);
    list.Add((void*)&str);
    std::cout << *(int*)list[0] << "\t" << *(double*)list[1] << "\t" << *(std::string*)list[2]<< list.Length() << "\n";
    return 0;
}