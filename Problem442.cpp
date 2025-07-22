#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Hash Set Approach
    vector<int> findDuplicates(vector<int> &nums) {
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : nums) {
            if (seen.count(num)) {
                result.push_back(num);
            } else {
                seen.insert(num);
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    vector<vector<int>> testCases = {
        {4, 3, 2, 7, 8, 2, 3, 1},
        {1, 1, 2},
        {1, 2, 3, 4, 5}
    };
    
    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test " << (i + 1) << ": ";
        for (int x : testCases[i]) cout << x << " ";
        cout << "-> Duplicates: ";
        
        vector<int> duplicates = solution.findDuplicates(testCases[i]);
        for (int x : duplicates) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}