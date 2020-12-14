#include <iostream>
#include "linklist/linklist.hpp"
int main()
{
    int a = 89;
    double b = 34;
    ds::Linklist list((void *)&a);
    list.Add((void*)&b);
    std::cout << *(int*)list[0] << "\t" << *(double*)list[1] << "\t" << list.Length() << "\n";
    return 0;
}