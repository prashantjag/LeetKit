#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Method 1: Using sort + unique (easier to understand)
        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        if (nums.size() >= 3) {
            return nums[2];  // Third maximum
        } else {
            return nums[0];  // Maximum (first element)
        }
    }
};

// Alternative O(n) solution
class Solution2 {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;   // 1st maximum
        long long second = LLONG_MIN;  // 2nd maximum  
        long long third = LLONG_MIN;   // 3rd maximum
        
        for (int num : nums) {
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second && num < first) {
                third = second;
                second = num;
            } else if (num > third && num < second) {
                third = num;
            }
        }
        
        return (third == LLONG_MIN) ? first : third;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> nums1 = {3, 2, 1};
    cout << "Test 1 [3,2,1]: " << solution.thirdMax(nums1) << endl;  // Expected: 1
    
    // Test case 2
    vector<int> nums2 = {1, 2};
    cout << "Test 2 [1,2]: " << solution.thirdMax(nums2) << endl;    // Expected: 2
    
    // Test case 3
    vector<int> nums3 = {2, 2, 3, 1};
    cout << "Test 3 [2,2,3,1]: " << solution.thirdMax(nums3) << endl; // Expected: 1
    
    // Test case 4
    vector<int> nums4 = {1, 2, 2, 5, 3, 5};
    cout << "Test 4 [1,2,2,5,3,5]: " << solution.thirdMax(nums4) << endl; // Expected: 2
    
    // Test case 5
    vector<int> nums5 = {2, 2, 2};
    cout << "Test 5 [2,2,2]: " << solution.thirdMax(nums5) << endl;  // Expected: 2
    
    return 0;
}