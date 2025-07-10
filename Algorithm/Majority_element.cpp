//Optimal solution   
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int freq = 1 , ans = nums[0];
        for(int i = 1; i<n ; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq = 1;
                ans = nums[i];
            }
        if(freq > n/2){
            return ans;
        }
        }
        return ans;
    }
};





//Bruteforce approch time complexity = O(n^2)

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

