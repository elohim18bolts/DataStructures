#ifndef NODE_HPP
#define NODE_HPP

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
        /**
         * @brief Points to the parent node.
         * */
        Node *parent;
        /**
         * @brief Points to the right child node.
         * */
        Node *right;
        /**
         * @brief Points to the left child node.
         * */
        Node *left;
        /**
         * @brief This contain the type of the node.
         **/
        const char *_type = "Node";
    };
} // namespace ds

#endif