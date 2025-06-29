/*
Intuition
You're solving a problem that counts how many elements in an array are smaller than a given value k.
This is a straightforward counting problem where you need to iterate through the array and increment 
a counter whenever you find an element less than the threshold.

Approach
Input: Read the threshold value k and array length ln
Iterate: Go through each element in the array
Compare: For each element, check if it's less than k
Count: Increment counter cnt when condition is met
Output: Return the total count
Complexity
Time Complexity: O(n) where n is the length of the array
Single pass through the array with constant time operations
Space Complexity: O(1)
Only using a few variables (cnt, k, ln) regardless of input size
The array is part of input, not additional space
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums[10];
    int ln;
    int k;
    cout << "Enter value: " << endl;
    cin >> k;
    int cnt = 0;
    cout << "Enter the length of array: " << endl;
    cin >> ln;
    for (int i = 0; i < ln; i++)
    {
        cin >> nums[i];
        if (nums[i] < k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
Enter value: 
5
Enter the length of array: 
6
1 2 3 6 7 8
3
*/