#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0] ,index;
    cout << "Minimum number in given array : ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (min > arr[i + 1])
        {
            min = arr[i + 1];
        }
        index = i+1;
    }
    cout << min<<endl;
    cout<<"And the index of minimum number is : "<<index;
    return 0;
}