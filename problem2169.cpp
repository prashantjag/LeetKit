#include <iostream>
using namespace std;
class Solution {
    public:
    int countOperations(int num1, int num2){
        int steps = 0;
        while (num1>0 && num2>0)
        {
            if (num1 >= num2){
                num1 -= num2;
            } else {
                num2 -= num1;
            }
            steps++;
        }
    return steps;
    }
};
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Solution sol;
    cout << sol.countOperations(n1, n2) << endl;
    return 0;
}