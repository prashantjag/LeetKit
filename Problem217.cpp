#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Method 1: Using unordered_set (more efficient)
    bool containsDuplicate(vector<int> &nums){
        unordered_set<int> seen;
        for(int num : nums){
            if(seen.find(num) != seen.end()){
                return true;  // Duplicate found
            }
            seen.insert(num);
        }
        return false;
    }
    
    // Method 2: Alternative using sorting
    bool containsDuplicateSort(vector<int> &nums){
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    
    cout<<"Array: ";
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Contains Duplicate: "<<(solution.containsDuplicate(nums) ? "True" : "False")<<endl;
    
    return 0;
}