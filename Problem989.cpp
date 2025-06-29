#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> result;
        int carry = K;  // Start with K as our "carry"
        int i = A.size() - 1;  // Start from rightmost digit
        
        // Continue while we have digits to process OR carry remaining
        while (i >= 0 || carry > 0) {
            
            // If we still have digits in array, add current digit to carry
            if (i >= 0) {
                carry += A[i];
                i--;  // Move to next digit (left)
            }
            
            // Extract the last digit and add to result
            result.push_back(carry % 10);
            
            // Remove the last digit from carry (divide by 10)
            carry = carry / 10;
        }
        
        // Reverse because we built the result backwards
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution sol;
    
    int testcase;
    cout << "Enter number of digits: ";
    cin >> testcase;
    
    vector<int> OldArray(testcase);
    cout << "Enter array digits: ";
    for (int i = 0; i < testcase; i++)
    {
        cin >> OldArray[i];
    }
    
    int k;
    cout << "Enter value to add: ";
    cin >> k;
    
    // Call the solution
    vector<int> result = sol.addToArrayForm(OldArray, k);
    
    cout << "Result: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}

/*Array: [1, 2, 0, 0]  K = 34
Index:  0  1  2  3

Step 1: i=3, carry=34
- carry += A[3] → 34 + 0 = 34
- result.push_back(34 % 10) → result = [4]
- carry = 34/10 = 3
- i = 2

Step 2: i=2, carry=3  
- carry += A[2] → 3 + 0 = 3
- result.push_back(3 % 10) → result = [4, 3]
- carry = 3/10 = 0
- i = 1

Step 3: i=1, carry=0
- carry += A[1] → 0 + 2 = 2  
- result.push_back(2 % 10) → result = [4, 3, 2]
- carry = 2/10 = 0
- i = 0

Step 4: i=0, carry=0
- carry += A[0] → 0 + 1 = 1
- result.push_back(1 % 10) → result = [4, 3, 2, 1]  
- carry = 1/10 = 0
- i = -1

Step 5: i=-1, carry=0
- Loop ends (both conditions false)

Step 6: Reverse result
- result = [4, 3, 2, 1] → [1, 2, 3, 4] */