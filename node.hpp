#ifndef NODE_HPP
#define NODE_HPP
class Node {
private:
    int element;
    Node* left;
    Node* right;
    Node* up;
    Node *down;
public:
    Node() = default;
    Node(int value) {
        this->element = value;
        left = NULL;
        right = NULL;
        up = NULL;
        down = NULL;
    }

    void to_string() {
        std::cout << "\nNode value is: " << this->element << ", and node pointers are\n";
        std::cout << "\nUp: " << this->up << "\nDown: "<< this->down << "\nLeft: "<<this->left << "\nRight: " << this->right <<"\n";
    }
};

#endif

