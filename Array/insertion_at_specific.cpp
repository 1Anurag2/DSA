#include<iostream>
using namespace std;
int main(){
    int n,x,position;
    cout<<"Enter the size of array :";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the inserting position : ";
    cin>>position;
    cout<<"Enter the number which is inserted : ";
    cin>>x;
    for(int i = n-1;i>=position-1;i--){
        array[i+1]=array[i];
    }
    array[position-1] = x;
    n++;
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
    return 0;
}