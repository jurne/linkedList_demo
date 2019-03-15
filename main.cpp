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

/*struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL;   
void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display(); 
   return 0; 
} */