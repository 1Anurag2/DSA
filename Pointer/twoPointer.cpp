#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,1,1,1,0,0,0,1,1,0,1,0};
    int n = arr.size();
    int left = 0;
    int right = n -1;
    while(left < right){
        if(arr[left] == 0){
            left++;
        }else{
            if(arr[right]==0){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }else{
                right--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}