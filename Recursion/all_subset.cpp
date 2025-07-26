#include<iostream>
#include<vector>
using namespace std;

void allSubset(vector<int> &arr, vector<int> &ans, int i) {
    if (i == arr.size()) {
        // Print current subset
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }

    // Include current element
    ans.push_back(arr[i]);
    allSubset(arr, ans, i + 1);

    ans.pop_back(); // Backtrack
    // Exclude current element
    allSubset(arr, ans, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;    
    allSubset(arr, ans, 0);
    cout << "All subsets generated." << endl;

    return 0;
}

//Question No. 78
// class Solution {
// public:
//     void getallSubset(vector<int> &nums , vector<int> &ans , int i,vector<vector<int>>&allSubset){
//         if(i == nums.size()){
//            allSubset.push_back({ans});
//            return;
//         }
//         ans.push_back(nums[i]);
//         getallSubset(nums,ans,i+1,allSubset);

//         ans.pop_back();
//         getallSubset(nums,ans,i+1,allSubset);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>allSubset;
//         vector<int>ans;
//         getallSubset(nums , ans , 0 , allSubset );
//         return allSubset;
//     }
// };