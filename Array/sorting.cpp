#include <iostream>
using namespace std;
int main()
{
    int temp, arr[6] = {5, 6, 2, 3, 9, 4};
    cout << "Sorted Array :";
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}