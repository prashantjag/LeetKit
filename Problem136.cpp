#include <bits/stdc++.h>
using namespace std;

class Solution {  // Capital 'S'
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR each number
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << solution.singleNumber(nums);  // Output: 4
    return 0;
}
