#include "linklist/linklist.hpp"
#include <iostream>
namespace ds
{
    Linklist::Linklist(void *data)
    {
        tail.data = data;
        std::cout << "List created\n";
    }
} // namespace ds