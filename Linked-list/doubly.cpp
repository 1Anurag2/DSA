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
    return 0;
}