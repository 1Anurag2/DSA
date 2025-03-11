#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next = NULL;
        }
};

class linkedlist{
    Node* head;
    Node* tail;

    public:
        linkedlist(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* new_node = new Node(val); //dynamic new_node creation it's work also outer of function
            // Node new_node(val);   // static new_node creation it's valid for only this inner function outer of this function new_node will not work 
            if(head == NULL){
                head=tail = new_node;
                return;
            }else{
                new_node -> next = head;
                head = new_node;
            }
        }

        void print(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    linkedlist ll;
    ll.push_front(1);
    ll.push_front(3);
    ll.push_front(5); 
    ll.print();
    return 0;
}


// push_front  --->  adding value before the head pointer
// push_back   --->  adding value after the last value or tail pointer
// pop_front
// pop_back