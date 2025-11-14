#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    int push(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }
    int isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}