#include <iostream>
using namespace std;

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        while (target != 1) {
            if (target % 2 == 1) {
                count++;
                target = target - 1;
            } else {
                if (maxDoubles > 0) {
                    target = target / 2;
                    maxDoubles--;
                    count++;
                } else {
                    count++;
                    target--;
                }
            }
        }
        return count;
    }
};

int main() {
    int target, maxDoubles;
    cin >> target >> maxDoubles;
    Solution sol;
    cout << sol.minMoves(target, maxDoubles) << endl;
    return 0;
}