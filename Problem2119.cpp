#include <iostream>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        // If num is 0 or doesn't end with 0, it remains the same after double reversal
        return num == 0 || num % 10 != 0;
    }
};

int main() {
    Solution solution;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    bool result = solution.isSameAfterReversals(num);
    cout << "Result: " << (result ? "true" : "false") << endl;
    
    return 0;
}

/*
Problem 2119: A Number After a Double Reversal

Given an integer num, reverse its digits to get reversed1, then reverse reversed1 to get reversed2.
Return true if reversed2 equals num. Otherwise return false.

Key Insight:
- If a number ends with 0 (except 0 itself), after first reversal the leading zeros are dropped
- Example: 1800 → 0081 → 81 ≠ 1800
- Numbers not ending with 0 remain unchanged after double reversal
- Special case: 0 remains 0 after double reversal

Time Complexity: O(1)
Space Complexity: O(1)
*/

