#ifndef LINKLIST_HPP
#define LINKLIST_HPP
#include <cstddef>
#include <iostream>
namespace ds
{
    struct Node
    {
        /**
         * @brief Node reference to the next node.
         * 
         */
        Node *next;
        /**
         * @brief data containing the node 
         * which is type void*.
         * 
         */
        void *data;
    };
    class Linklist
    {
    private:
        Node _head;
        size_t _length;
        /**
         * @brief Always points to the last element in the list.
         * 
         */
        Node* _cursor;

    public:
    /**
     * @brief Constructor that recieves a void * reference to some type and store that
     * value as head or the first element in the list.
     * @param[in] data which is type void*
     * */
        Linklist(void* data);
        ~Linklist();
        /** 
         * @brief Initialize the list and do nothing to head.
         * */
        Linklist();
        /**
         * @brief Construct a new Linklist object
         * Recieves a double element.
         * 
         * @param[in] data Number type element.
         */
        Linklist(double data);
        /** 
         * @brief Add a node to the end of the list.
         * Basically is the same that append works in python.
         * @param[in] data which is type of void*
         * */
        void Add(void* data);
        /** 
         * @brief Insert an elment in the list:
         * @param[in] data data to be inserted which is type of void*
         * @param[in] index the position of the inserted element, the following elements will be shift to the right.
         * If the index is greater than the length of the list then the element will be appended to the list.
         * @returns true If there was a succesful insertion.
         * @returns false If the insertion was unsuccesful.
         * */
        bool Insert(void* data, int index);
        /**
         * @brief Overload of oprator [].
         * @param[in] index 
         * 
         * @returns data the data containing the node at position index. 
         */
        void* operator[](size_t index);
        /**
         * @brief Length of the list.
         * @return size size of the list which is of type size_t
         * 
         */
        size_t Length();

        
       
    };
} // namespace ds

#endif