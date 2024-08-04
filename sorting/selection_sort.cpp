#include <iostream>
using namespace std;
int main()
{
    int n, min, temp;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    cout << "Sorted array using selection sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//      int n,temp, loc,m;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         m = arr[i];
//         loc = i+1;
//         for(int j =i+1;j<n;j++){
//             if(m>arr[j+1]){
//                 m = arr[j];
//                 j = loc;
//             }
//         }
//         if(arr[loc]<arr[i]){
//             temp = arr[loc];
//             arr[loc]=arr[i];
//             arr[i]=temp;
//         }
//     }
//     cout<<"Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }