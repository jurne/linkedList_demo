#pragma once
#include <iostream>
#include <string>

class Node {
    public: 
        Node(int data);
    
    public:
        void set_next(Node * next);
        Node * get_next(void);

        std::string get_data(void);
    
    private:
        int data;
        Node * next = nullptr;
};