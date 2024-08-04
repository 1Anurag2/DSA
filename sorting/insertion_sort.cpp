#include<iostream>
using namespace std;
int main(){
    int temp;
    int arr[] = { 4,6,8,2,3,9,1};
   int  n = sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        temp = arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted array using insertion sort : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



// #include<iostream>
// using namespace std;
// int main(){
//      int n,temp;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=i;i>=1;j--){
//             if(arr[j-1]>arr[j]){
//                 temp = arr[j-1];
//                 arr[j-1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     cout<<"Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }