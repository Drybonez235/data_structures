//g++ --std=c++20 linked_list.cpp
#include <iostream>

using namespace std;

class node{
    public:
    int value;
     node* next;

     node(int data_value){
       value = data_value;
       next = NULL;
     }
};

struct linked_list{
    public:
    int length = 0;
    node head = NULL;
    node tail = NULL;

    linked_list(node start_node){
        length += 1;
        head = start_node;
        tail = start_node;
    }

    void add_node(node node_to_add){
        length += 1;
        tail.next = &node_to_add;
        tail = node_to_add;
    }

};

int main(){

node one(1);
node two(2);
node three(300);
linked_list list(one);
list.add_node(two);
list.add_node(three);
node current = list.head;
node* next = &list.head.next;

while(next != NULL){
    cout << current.value << endl;
    next = current.next;
}


return 0;
}

