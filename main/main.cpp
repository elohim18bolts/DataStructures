#include <iostream>
#include "linklist/linklist.hpp"
int main()
{
    int a = 89;
    ds::Linklist list((void *)&a);
    std::cout << *(int *)list[1] << "\n";
    return 0;
}