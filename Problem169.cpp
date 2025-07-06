#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
};

int main() {
    Solution solution;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    int majority = solution.majorityElement(nums);
    cout << "Majority Element: " << majority << endl;
    
    return 0;
}

// https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly