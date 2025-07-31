#include<iostream>
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

class circularList{
    Node* head;
    Node* tail;
    public:
    circularList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head; // Circular link
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head; // Maintain circular link
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
            return;
        }else{
            tail->next = newNode;
            newNode->next = head; // Circular link
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
            return;
        }else{
            Node* temp = head;
            if(head == tail){ // Only one node
                head = tail = NULL;
            }else{
                head = head->next;
                tail->next = head; // Maintain circular link
            }
            delete temp;
        }
    }
    void pop_back(){
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = head; // Maintain circular link
            delete tail;
            tail = temp;
        }
    }
    void printLL(){
        if(head == NULL){
            cout<<"Linkedlist is empty"<<endl;
            return;
        }
        Node* temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }
    void search(int val){
        if(head == NULL){
            cout<<"Linkedlist is empty"<<endl;
            return;
        }
        Node* temp = head;
        int pos = 0;
        do{
            if(temp->data == val){
                cout<<"Element "<<val<<" found at position "<<pos<<endl;
                return;
            }
            temp = temp->next;
            pos++;
        }while(temp != head);
        cout<<"Element not found"<<endl;
    }
    ~circularList(){
        if(head == NULL) return;
        Node* current = head;
        Node* nextNode;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while(current != head);
        head = tail = NULL; // Clear the list
    }
};
int main(){
    circularList cl;
    cl.push_front(1);
    cl.push_front(2);
    cl.push_front(3);
    cl.push_front(4);
    cl.push_front(5);
    cl.push_back(9);
    cl.printLL();
    cl.pop_front();
    cl.printLL();
    cl.pop_back();
    cl.printLL();
    cl.search(3);
    return 0;
}