#include<iostream>
using namespace std;
int main(){
    int n ,x;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number which is inserted in array ";
    cin>>x;
    for(int i=n;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
    n++;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}