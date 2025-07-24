#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int> &nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n
        
        // Step 1: Reverse first (n-k) elements
        reverse(nums, 0, n - k - 1);
        
        // Step 2: Reverse last k elements
        reverse(nums, n - k, n - 1);
        
        // Step 3: Reverse entire array
        reverse(nums, 0, n - 1);
    }
};

int main() {
    Solution solution;
    int n, k;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter k (rotation steps): ";
    cin >> k;
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    solution.rotate(nums, k);
    
    cout << "After rotating by " << k << " steps: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}