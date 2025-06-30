#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        
        // Check if result is within 32-bit integer range
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    cout << solution.reverse(123) << endl;   // Output: 321
    cout << solution.reverse(-123) << endl;  // Output: -321
    cout << solution.reverse(120) << endl;   // Output: 21
    
    return 0;
}