#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = 0;
    int current_sum = 0;
    for(int i = 0;i<n;i++){
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum < 0){
            current_sum = 0; // Reset current sum if it becomes negative
        }
    }
    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max_sum = 0;
//     for(int st = 0;st<n;st++){
//         int current_sum = 0;
//         for(int end = st;end<n;end++){
//             current_sum += arr[end];
//             max_sum = max(current_sum,max_sum);
//             // if(current_sum > max_sum){
//             //     max_sum = current_sum;
//             // }
//         }

//     }
//     cout << "Maximum subarray sum is: " << max_sum << endl;
//     return 0;
// }