#include<iostream>
using namespace std;
int main(){
    
    int n,x,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the number inserting at the end point :";
    cin>>x;
    array[i]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
    return 0;
}