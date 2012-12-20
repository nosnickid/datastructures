#ifndef SD_DATASTRUCTURES_BINARY_TREE_H__
#define SD_DATASTRUCTURES_BINARY_TREE_H__

namespace sd {

template<typename T> 
class BinaryTree {
private:
    struct binary_tree_node_t {
        T m_value;

        binary_tree_node_t *m_leftptr;
        binary_tree_node_t *m_rightptr;
    };

    binary_tree_node_t *m_head;

    int m_node_count;

public:
    BinaryTree() {
        this->m_head = 0;
        this->m_node_count = 0;
    }

    void add(T value) {
        binary_tree_node_t *prev = NULL;
        binary_tree_node_t *curr = this->m_head;
        bool left = true;

        while(true) {
            if (!curr) {
                curr = new binary_tree_node_t();
                curr->m_leftptr = curr->m_rightptr = 0;
                curr->m_value = value;
                this->m_node_count++;

                if (prev) {
                    if (left) {
                        prev->m_leftptr = curr;
                    } else {
                        prev->m_rightptr = curr;
                    }
                } else {
                    this->m_head = curr;
                }
                break;
            } else {
                if (curr->m_value == value) break;

                prev = curr;
                left = value <= curr->m_value;
                curr = left ? curr->m_leftptr : curr->m_rightptr;
            }
        }
    }

    int getNodeCount() {
        return this->m_node_count;
    }

    bool isValuePresent(T value) {
        binary_tree_node_t *curr = this->m_head;

        while(curr) {
            if (curr->m_value == value) return true;
            if (value < curr->m_value) curr = curr->m_leftptr;
            else curr = curr->m_rightptr;
        }

        return false;
    }

};

};


#endif

