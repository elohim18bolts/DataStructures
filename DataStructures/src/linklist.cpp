#include "linklist/linklist.hpp"
#include <iostream>
namespace ds
{
    Linklist::Linklist(void *data)
    {
        _head.data = data;
        _head.next = nullptr;
        _cursor = &_head;
        _length = 1;
    }

    Linklist::Linklist()
    {
        _head.data = nullptr;
        _head.next = nullptr;
        _cursor = &_head;
        _length = 0;
    }
    Linklist::Linklist(double data)
    {
        void *_data = (void *)&data;
        _head.data = _data;
        _head.next = nullptr;
        _cursor = &_head;
        _length = 1;
    }

    void Linklist::Add(void *data)
    {
        //Check the the head contains something
        if (!_head.data)
        {
            _head.data = data;
            return;
        }
        //Go to the last node in the list
        Node *node = (Node *)malloc(sizeof(Node));
        _cursor->next = node;
        _cursor->next->data = data;
        _cursor = node;
        _length++;
    }

    size_t Linklist::Length()
    {
        return _length;
    }

    void *Linklist::operator[](size_t index)
    {
        Node *cursor = &_head;
        if (index >= _length || index < 0)
            return nullptr;
        for (size_t i = 0; i < index; i++)
            cursor = cursor->next;

        return cursor->data;
    }

    Linklist::~Linklist()
    {
        Node *cursor = _head.next;
        for (size_t i = 1; i < _length; i++)
        {
            if (cursor)
            {
                Node *lookahead = cursor->next;
                std::cout << "Deleting " << cursor << "\n";
                delete cursor;
                cursor = lookahead;
            }
        }
    }

} // namespace ds