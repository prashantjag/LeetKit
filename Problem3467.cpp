#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                temp.push_back(0);
            }
            else
            {
                temp.push_back(1);
            }
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
};

int main()
{
    Solution solution;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    vector<int> result = solution.transformArray(nums);

    cout << "Transformed array: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}