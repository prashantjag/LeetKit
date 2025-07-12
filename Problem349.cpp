#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;  // Use set to avoid duplicates
        
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    result.insert(nums1[i]);  // Add to result set
                    break;  // Move to next element in nums1
                }
            }
        }
        
        // Convert set to vector
        return vector<int>(result.begin(), result.end());
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    
    cout << "nums1: ";
    for(int x : nums1) cout << x << " ";
    cout << endl;
    
    cout << "nums2: ";
    for(int x : nums2) cout << x << " ";
    cout << endl;
    
    vector<int> result = solution.intersection(nums1, nums2);
    
    cout << "Intersection: ";
    for(int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}