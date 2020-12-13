#ifndef LINKLIST_HPP
#define LINKLIST_HPP

namespace ds
{
    struct Node
    {
        Node *next;
        void *data;
    };
    class Linklist
    {
    private:
        Node tail;

    public:
        Linklist(Node);
    };
} // namespace ds

#endif