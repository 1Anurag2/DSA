#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
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
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "linkedlist is Empty !" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "linkedlist is Empty !" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position !" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        Node *temp = head;
        Node *newNode = new Node(val);
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void search(int val)
    {
        int pos = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->val == val)
            {
                cout<<"Element Found "<<pos<<endl;
                return;
            }else{
            temp = temp->next;
            pos+=1;
            }
        }
        cout<<"Element not found !"<<endl;
    }
    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL   tail:" << tail->next << " head : " << head->next << endl;
    }
};
int main()
{
    List LL;
    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(3);
    LL.push_front(4);
    LL.push_front(5);
    LL.push_front(6);
    LL.printLL();

    LL.insert(9, 1);
    LL.printLL();

    LL.search(2);

    // LL.push_back(5);
    // LL.printLL();

    // LL.pop_front();
    // LL.printLL();

    // LL.pop_back();
    // LL.printLL();
    return 0;
}
