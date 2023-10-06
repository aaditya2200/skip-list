#include <iostream>
#include "node.hpp"

int main() {
    std::cout << "\nHello there!" << "\n";
    Node *node = new Node(4);
    Node left_node(7);
    Node up_node(11);
    node->to_string();
    node->set_left(&left_node);
    node->set_up(&up_node);
    node->to_string();
    std::cout << "Value of upper neighbour is: " << node->get_up()->get_element() << "\n";
    Node n1(6);
    Node n2(4);
    Node n3(-1);
    node = node->insert_element(6);
    node = node->insert_element(11);
    node = node->insert_element(-1);
    node = node->insert_element(0);
    node->traverse_level();
    return 0;
}
