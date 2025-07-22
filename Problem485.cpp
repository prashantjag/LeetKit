#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;  // Reset when we encounter 0
            }
        }
        
        return maxCount;
    }
};

int main() {
    Solution solution;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);  // ✅ Fixed: Proper vector initialization
    cout << "Enter binary array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    int result = solution.findMaxConsecutiveOnes(nums);
    cout << "Max consecutive 1s: " << result << endl;
    
    return 0;
}
