#include<iostream>
using namespace std;
int binary(int arr[],int size,int element){
    int low = 0 ,mid,high = size-1;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
                }
        if(arr[mid] < element){
            mid = low+1; 
        }
        else{
            mid = high-1;
        }
    }
}
int main(){
    int arr[] = {5,6,7,8,8,3,4,4,2,1,9};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter the element : ";
    cin>>element;
    cout<<binary(arr,size,element);
    return 0;
}