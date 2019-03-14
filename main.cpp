#include <iostream>
#include "bull.h"
#include "node.h"

using namespace std;

void print(Node *node){
    while(node!= nullptr){
        cout << node->get_data() << endl;
        node = node->get_next();
    }
}

int main() {

    Bull giant1(2000,1000,"Giant");
    Bull weideman(2200,1500,"weideman");
    Bull giant2(1000,500,"Giant");

    cout << giant1.to_string() << endl;
    cout << weideman.to_string() << endl;
    cout << giant2.to_string() << endl;
    
    Node start(0);
    Node second(1);
    Node last(2);

    second.set_next(&last);
    start.set_next(&second);

    print(&start);

}