#include <iostream>
using namespace std;
#define MAX_SIZE 5
int arr[MAX_SIZE];
int top = -1;
void push(int element)
{
    if (top == MAX_SIZE - 1)
    {
        cout << "Stack is full !" << endl;
    }
    else
    {
        top = top + 1;
        arr[top] = element;
        cout << "Pushed element : " << element << endl;
    }
}
void pop(){
    if(top == -1){
        cout<<"Stack is empty !"<<endl;
    }
    else{
        cout<<"Poped element : "<<arr[top]<<endl;
        top = top - 1;
    }
}
void display(){
    cout<<"Remaining stack elements : ";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<",";
    }
}
int main()
{
    push(4);
    push(2);
    push(3);
    push(7);
    push(9);
    pop();
    pop();
    display();
    return 0;
}