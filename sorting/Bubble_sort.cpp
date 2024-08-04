#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cout << "Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



// #include<iostream>
// using namespace std;
// int main(){
//     int n,temp;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i= n;i>0;i--){
//         for(int j=0;j<i+1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     cout<<"Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }