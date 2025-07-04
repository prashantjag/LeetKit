#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for (auto a : s) {
            mp[a]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string s;
    
    cout << "Enter a string: ";
    cin >> s;
    
    int result = solution.firstUniqChar(s);
    
    if (result != -1) {
        cout << "First unique character is at index: " << result << endl;
        cout << "Character: '" << s[result] << "'" << endl;
    } else {
        cout << "No unique character found!" << endl;
    }
    
    return 0;
}
