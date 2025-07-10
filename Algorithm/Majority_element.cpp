#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int element : nums){
            int freq = 0;
            for(int value : nums){
                if(value == element){
                    freq++;
                }
            }
            if(freq > n/2){
                return element;
            }
        }
        return -1; // Will never be reached if majority element is guaranteed
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}
