#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> count;
        
        // Count only even numbers
        for(int num : nums) {
            if(num % 2 == 0) {
                count[num]++;
            }
        }
        
        // If no even numbers found
        if(count.empty()) {
            return -1;
        }
        
        // Find the most frequent even number
        int maxFreq = 0;
        int result = -1;
        
        for(auto& p : count) {
            if(p.second > maxFreq) {
                maxFreq = p.second;
                result = p.first;
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 2, 2, 4, 4, 1};
    
    cout << "Most frequent even: " << solution.mostFrequentEven(nums) << endl;
    
    return 0;
}