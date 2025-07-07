#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j <= i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j + 1];
                    nums[j + 1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return (nums[n-1] - 1) * (nums[n-2] - 1);  // Fixed: Added -1
    }
};

int main()
{
    Solution solution;
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> nums(n);
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    int result = solution.maxProduct(nums);
    cout << "Maximum Product: " << result << endl;
    
    return 0;
}
