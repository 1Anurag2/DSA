#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int element)
{
    int low , mid , high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            mid = low + 1;
        }
        else
        {
            mid = high - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 67};
    int size = sizeof(arr) / sizeof(int);
    int element = 3;
    int elementindex = binarysearch(arr,size,element);
    cout<< "Index of the element " << element << " at " << elementindex;
    return 0;
}