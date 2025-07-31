#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class doublylist
{
    Node *head;
    Node *tail;

public:
    doublylist()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Linkedlist is Empty"<<endl;
            return ;
        }else{
            // Node* temp = head;
            // while(temp->next != NULL){
            //     temp = temp->next;
            // }
            // tail = tail->prev;
            // tail->next = NULL;
            // delete temp;
            Node* temp = tail;
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
            temp->prev = NULL;
            delete temp;
        }
    }

    void insert(int val , int pos){
        if(pos < 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        for(int i =0 ; i<pos-1 && temp != NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"Position out of bounds"<<endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }

    void search(int val){
        int pos = 0;
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Element "<<val<<" found at position "<<pos<<endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout<<"Element not found"<<endl;
    }
    void printLL()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linkedlist is empty" << endl;
        }
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};
int main()
{
    doublylist dl;
    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_front(4);
    dl.push_front(5);
    dl.push_back(55);
    dl.push_back(9);

    dl.printLL();

    dl.pop_front();
    dl.printLL();

    dl.pop_back();
    dl.printLL();

    dl.insert(10, 2);
    dl.printLL();

    dl.search(3);
    return 0;
}