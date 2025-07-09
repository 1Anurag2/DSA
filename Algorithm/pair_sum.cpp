#include <iostream>
#include <vector>
using namespace std;

bool pairSum(vector<int>& arr, int target) {
    int i = 0;
    int last_element = arr.size() - 1;
    
    while (i < last_element) {
        int pairsum = arr[i] + arr[last_element];
        if (pairsum < target) {
            i++; 
        }
        else if (pairsum > target) {
            last_element--; 
        }
        else {
            cout << "Pair found: " << arr[i] << " + " << arr[last_element] << " = " << target << endl;
            return true;
        }
    }
    cout << "No pair found with sum " << target << endl;
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 9}; 
    int target = 10;
    pairSum(arr, target);
    return 0;
}
