#include "linklist/linklist.hpp"
#include <iostream>
namespace ds
{
    Linklist::Linklist(void *data)
    {
        tail.data = data;
        std::cout << "List created\n";
    }
    void *Linklist::operator[](int index)
    {
        Node node = tail;
        for (int i = 0; i < index; i++)
        {
            if (node.next)
                throw "Index out of range exception.";
            node = *node.next;
        }
        return node.data;
    }
} // namespace ds