#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Change this value according to your needs

int front = -1, rear = -1;
int arr[MAX_SIZE];
void enqueue(int element)
{
    if (rear == MAX_SIZE-1)
    {
        cout << "Queue is full Cannot enqueue element: " << element << endl;
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1);
        }
        arr[rear] = element;
        cout << "Enqueued element: " << element << endl;
    }
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty. Cannot dequeue element." << endl;
    }
    else
    {
        cout << "Dequeued element: " << arr[front] << endl;
        if (front == rear)
        {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        }
        else
        {
            front = front + 1; //front++
        }
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout<<"Queue elements :";
      for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();

    dequeue();
    display();

    return 0;
}