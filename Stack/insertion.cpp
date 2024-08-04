#include <iostream>
using namespace std;
#define MAX 7
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "Stack is overflow !" << endl;
        // return;
    }
    else
    {
        top = top + 1;
        stack_arr[top] = data;
        cout << "Pushed element :" << data << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty !" << endl;
    }
    else
    {
        cout << "Popped element :" << stack_arr[top] << endl;
        top = top - 1;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty : ";
    }
    else
    {
        cout<<"Avaiable Stack elements :";
        for (int i = 0; i <= top; i++)
        {
            cout << stack_arr[i] << " ";
        }
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    pop();
    pop();
    display();
    return 0;
}