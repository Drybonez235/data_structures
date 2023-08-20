//Working on it :)
//BUt a WIP

#include <iostream>

using namespace std;
class node{
    public:
    int value;
    node * ptr_front;
    node * ptr_back;

    node(int data){
       value = data;
        ptr_front = NULL;
        ptr_back = NULL;
        }
};

struct list{
    public:
    node * head;

    list(){
        head = NULL;
    }

    void add_node(int data){
        node * node_to_add = new node(data);
        node * temp = head;
        node * last;
        if(head->ptr_front == NULL){
            head = node_to_add;
            return;
        }
        while(temp->ptr_front != NULL){
            temp = temp->ptr_front;
        }
        last = temp;
        temp->ptr_front = node_to_add;
        node_to_add->ptr_back = last;
    }

    void find_value(int value_to_find){
        while(head->ptr_front){
            if(head->value == value_to_find){
                cout << "We found the vlaue" << endl;
                break;
           }
           if(head->ptr_front == NULL){
            cout << "we it ain't there" << endl;
           }
           head = head->ptr_front;
        }
    }
};

int main(){
    list linked_list = list();
    linked_list.add_node(1);
    linked_list.add_node(2);
    linked_list.find_value(2);
    linked_list.find_value(5);

    return 0;
}