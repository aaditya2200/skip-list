#include <iostream>
#include "node.hpp"

int main() {
    std::cout << "\nHello there!" << "\n";
    Node node(4);
    Node left_node(7);
    Node up_node(11);
    node.to_string();
    node.set_element(5);
    node.set_left(&left_node);
    node.set_up(&up_node);
    node.to_string();
    std::cout << "Value of upper neighbour is: " << node.get_up()->get_element() << "\n";
    return 0;
}
