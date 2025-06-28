#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    vector<int> plusOne (vector<int>& digits){
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    // Option 1: Hardcoded example
    vector<int> digits = {1, 2, 3}; // Example: represents number 123
   
    // Create solution object
    solution sol;
    
    // Call plusOne function
    vector<int> result = sol.plusOne(digits);
    
    // Print the result
    cout << "Result: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}
