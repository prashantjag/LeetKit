#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums){
            int i = 0;
            int n = nums.size();
            for (int j = 1; j < n; j++)
            {
                if (nums[j] != 0) {
                    swap(nums[i], nums[j]);
                    i++;
                }
                
            }

        }
};
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    Solution sol;
    sol.moveZeroes(nums);
    cout << "Elements after moving zeroes: ";
    for(int i = 0; i<n;++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}