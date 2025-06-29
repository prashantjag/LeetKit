#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int hour : hours) {
            if (hour >= target) {
                count++;
            }
        }
        return count;
    }
};

// Test function
int main() {
    Solution solution;
    
    // Test case 1: hours = [0,1,2,3,4], target = 2
    vector<int> hours1 = {0, 1, 2, 3, 4};
    int target1 = 2;
    cout << "Test 1: " << solution.numberOfEmployeesWhoMetTarget(hours1, target1) << endl; // Expected: 3
    
    // Test case 2: hours = [5,1,4,2,2], target = 6
    vector<int> hours2 = {5, 1, 4, 2, 2};
    int target2 = 6;
    cout << "Test 2: " << solution.numberOfEmployeesWhoMetTarget(hours2, target2) << endl; // Expected: 0
    
    return 0;
}

/*
Problem: Number of Employees Who Met the Target

Given an array of integers hours representing the hours worked by each employee
and an integer target, return the number of employees who worked at least target hours.

Constraints:
- 1 <= hours.length <= 50
- 0 <= hours[i], target <= 105

Time Complexity: O(n) - single pass through array
Space Complexity: O(1) - only using counter variable
*/