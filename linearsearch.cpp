#include<iostream>
using namespace std;
int linearsearch(int arr[],int size , int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;    
}
int main(){
    int arr[] = {2,3,4,5,65,34,68,97,3332,6};
    int size = sizeof(arr)/sizeof(int);
    int element = 97;
    int searchindex = linearsearch(arr,size,element);
    cout<<"Index of the element "<<element<<" at "<<searchindex;
}











