#include <bits/stdc++.h>
using namespace std;

/*
LeetCode Problem 283: Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note:
- You must do this in-place without making a copy of the array.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Intuition:
Use two pointers: one (j) to scan the array, and another (i) to track the position to place the next non-zero element. 
Whenever a non-zero is found, swap it to the front (at index i) and increment i.

Approach:
- Iterate through the array with j.
- If nums[j] is not zero, swap nums[i] and nums[j], then increment i.
- This ensures all non-zero elements are moved to the front, and zeros are pushed to the end.

Complexity:
- Time complexity: O(n), where n is the size of nums.
- Space complexity: O(1), in-place operation.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    Solution sol;
    sol.moveZeroes(nums);
    cout << "Elements after moving zeroes: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}