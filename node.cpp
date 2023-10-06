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

Node* Node::insert_element(int value) {
    Node *node = new Node(value);
    if (value < this->get_element()) {
        node->set_right(this);
        this->set_left(node);
        return node;
    }
    Node* temp = this;
    while (temp != NULL) {
        if (value > temp->get_element() && temp->get_right() == NULL) {
            temp->set_right(node);
            node->set_left(temp);
            return this;
        }
        if (value < temp->get_element()) {
            node->set_right(temp);
            temp->get_left()->set_right(node);
            node->set_left(temp->get_left());
            temp->set_left(node);
            return this;
        }
        temp = temp->get_right();
    }
    return this;
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

void Node::traverse_level() {
    Node* temp = this;
    while (temp != NULL) {
        std::cout << temp->get_element() << " ";
        temp = temp->get_right();
    }
    std::cout << "\n";
}
