#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left;
}

int main() {
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target value: ";
    cin >> target;
    
    int result = searchInsert(nums, target);
    cout << "Insert position: " << result << endl;
    
    return 0;
}