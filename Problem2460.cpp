#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        // Step 1: Apply operations
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        // Step 2: Move all zeroes to the end
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }
        while (pos < n) {
            nums[pos++] = 0;
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    Solution sol;
    vector<int> result = sol.applyOperations(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
