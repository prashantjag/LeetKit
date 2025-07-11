#include <bits/stdc++.h>  // Fixed: bits/stdc++.h (not std++.h)
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> merged;
        
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        while (i < m) merged.push_back(nums1[i++]);
        while (j < n) merged.push_back(nums2[j++]);

        for(int k = 0; k < m + n; k++){
            nums1[k] = merged[k];
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    int m, n;
    
    cout << "Enter size of nums1 (m): ";
    cin >> m;
    cout << "Enter size of nums2 (n): ";
    cin >> n;
    
    vector<int> nums1(m + n);  // nums1 has size m+n
    vector<int> nums2(n);
    
    cout << "Enter " << m << " elements for nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter " << n << " elements for nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    cout << "Before merge:" << endl;
    cout << "nums1: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    
    cout << "nums2: ";
    for (int i = 0; i < n; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
    
    solution.merge(nums1, m, nums2, n);
    
    cout << "After merge:" << endl;
    cout << "nums1: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    
    return 0;
}
