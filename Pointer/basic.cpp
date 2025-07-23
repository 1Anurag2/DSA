#include <iostream>
using namespace std;
void changeA(int *ptr)
{
    *ptr = 20; // pass by reference using pointers
}

void changeB(int &b)
{
    b = 30; // pass by reference using alias
}

int main()
{
    int a = 5;
    int *ptr = &a;
    int **parentptr = &ptr;
    cout << &a << endl;

    cout << ptr << endl;

    cout << &ptr << endl;

    cout << parentptr << endl;

    cout << **(parentptr) << endl;

    cout << **(&parentptr) << endl;

    // NULL Pointer
    int **pt = NULL;
    cout << pt << endl;

    // pass by reference

    changeA(&a);
    cout << a << endl;
    changeB(a);
    cout << a << endl;

    // Array Pointer
    int arr[] = {6, 2, 3, 4, 5}; // constant pointers
    cout << arr << endl;
    cout << *arr << endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    return 0;
}