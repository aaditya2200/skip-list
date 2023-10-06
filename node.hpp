#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>
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

    void set_element(int);
    void set_left(Node*);
    void set_right(Node*);
    void set_up(Node*);
    void set_down(Node*);
    int get_element();
    Node* get_left();
    Node* get_right();
    Node* get_up();
    Node* get_down();
    Node* insert_element(int);
    void traverse_level();
};

#endif

