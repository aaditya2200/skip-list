#include "node.hpp"
#include <iostream>

void Node::set_element(int value) {
    this->element = value;
}

void Node::set_left(Node* n) {
    this->left = n;
}

void Node::set_right(Node *n) {
    this->right = n;
}

void Node::set_up(Node* n) {
    this->up = n;
}

void Node::set_down(Node *n) {
    this->down = n;
}

int Node::get_element() { 
    return this->element;
}

Node* Node::get_left() {
    return this->left;
}

Node* Node::get_right() {
    return this->right;
}

Node* Node::get_up() {
    return this->up;
}

Node* Node::get_down() {
    return this->down;
}
