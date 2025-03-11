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

        void pop_front(){
            Node* temp = head;
            if(head == NULL){
                cout<<"Linkedlist is Empty"<<endl;
                return ;
            }else{
                head = head ->next;
                temp->next = NULL;
                delete temp;
            }
        }

        void pop_back(){
            Node* temp = head;
            if(head == NULL){
                cout<<"Linkedlist is Empty"<<endl;
                return ;
            }
            while(temp->next != tail){
                temp = temp ->next;
            }
            temp ->next = NULL;
            delete tail;
            tail = temp;
        }

        void push_back(int val){
            Node* new_node = new Node(val);
            if(head == NULL){
                head = tail = new_node;
            }else{
                tail->next = new_node;
                tail = new_node;
            }
        }


        void insert(int val , int pos){
            if(pos < 0){
                cout<<"Invalid Position"<<endl;
                return;
            }

            if(pos == 0){
                push_front(val);
                return;
            }
            Node* new_node = new Node(val);
            Node* temp = head;
            for(int i=0 ; i<pos-1;i++){
                if(temp == NULL){
                    cout<<"Invalid postion"<<endl;
                    return;
                }
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }

        int search(int key){
            Node* temp = head;
            int index = 0;
            while(temp != NULL){
                if(temp->data == key){
                    return index;
                }
                temp = temp->next;
                index++;
            }
            return -1;
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
    // ll.push_front(1);
    // ll.push_front(3);
    // ll.push_front(5); 

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(8,0);
    // ll.pop_front();
    // ll.pop_back();
    ll.print();
    cout<<ll.search(3);
    return 0;
}


// push_front  --->  adding value before the head pointer
// push_back   --->  adding value after the last value or tail pointer
// pop_front
// pop_back