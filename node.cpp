#include "node.h"
#include "bull.h"
#include <string>
#include <iostream>

Node::Node(int data){
    this->data = data;
}

void Node::set_next(Node * node){
    this->next = node;
}
        
Node *Node::get_next(){
    return this->next;
}

std::string Node::get_data(void){
    return std::to_string(data);
}
