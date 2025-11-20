#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 0 ,1};
    int n = arr.size();
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}