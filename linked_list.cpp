//g++ --std=c++20 linked_list.cpp
//In a linked list the LIST is responsible for keeping track of itself. The list takes in a node and changes it.
//The list also only needs a head (which is a pointer to the memory address of the first node) and a tempory pointer to do everything it needs.
//To traverse the List, you start by pointing a tempory pointer to head. While the next part of head has a value, you make the temporary node that value, and repeat.
#include <iostream>

using namespace std;

class node{
    public:
    int value;
     node *next;

     node(int data_value){
       value = data_value;
        next = NULL;
     }
};

struct linked_list{
    public:
    node* head;

    linked_list(){
        head = NULL;
    }

    void add_node(int number_to_add){
        node* node_to_add = new node(number_to_add);
        if(head == NULL){
            head = node_to_add;
            return;
        }
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node_to_add;
        cout << "added node " << number_to_add << " to the list" << endl;
    }

    void delete_node(int value_to_delete){
        if(head == NULL){
            cout << "this is EMPTY" << endl;
            return;
        }
        node* current_temp;
        current_temp = head; //starting
        node* past_temp = current_temp;
        while(current_temp != NULL){
            if(current_temp->value == value_to_delete){
                current_temp = current_temp->next;
                past_temp->next = current_temp;
                cout << "deleted node " << value_to_delete << endl;
                return;
            }
            else{
                past_temp = current_temp;
                current_temp = current_temp->next; //This is hopping to the next node.
            }
        }
        cout << "Node not found" << endl;
        
    }
    void traverse(){
       node* pointer = head;
       if(pointer == NULL){
        cout << "This is EMPTY" << endl;
       }
        while(pointer != NULL){
           cout << pointer->value << endl; 
           pointer = pointer->next;
        }
        if(pointer == NULL){
           cout << "end of linked list" << endl; 
        }
    }
};

int main(){


linked_list list;
list.add_node(1);
list.add_node(2);
list.add_node(300);

list.traverse();
list.delete_node(4);
list.add_node(420);
list.delete_node(2);
list.traverse();

return 0;
}

