//Moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       int freq = 0 , ans = 0;
       for(int i = 0 ; i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }

       }
       return ans;
    }
};


//optimal solution

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int freq = 1 , ans = nums[0];
//         for(int i = 1; i<n ; i++){
//             if(nums[i] == nums[i-1]){
//                 freq++;
//             }else{
//                 freq = 1;
//                 ans = nums[i];
//             }
//         if(freq > n/2){
//             return ans;
//         }
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int element : nums){
//             int freq = 0;
//             for(int value : nums){
//                 if(value == element){
//                     freq++;
//                 }
//             }
//             if(freq > n/2){
//                 return element;
//             }
//         }
//         return -1;
//     }
// };