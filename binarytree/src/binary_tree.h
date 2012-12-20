#ifndef SD_DATASTRUCTURES_BINARY_TREE_H__
#define SD_DATASTRUCTURES_BINARY_TREE_H__

namespace sd {

template<typename T> 
class BinaryTree {
private:
    struct binary_tree_node_t {
        T *m_left;
        T *m_right;

        binary_tree_node_t *m_leftptr;
        binary_tree_node_t *m_rightptr;
    };

    binary_tree_node_t head;

public:
    BinaryTree() {
        this->head.m_leftptr = this->head.m_rightptr = 0;
        this->head.m_right = this->head.m_left = 0;
    }

};

};


#endif
