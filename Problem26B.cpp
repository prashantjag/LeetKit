// #MYSOLUTION
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 0, 2, 3};
    int n = 5;

    // First, sort the array if it's not sorted
    sort(arr, arr + n);

    // Use two pointers to count unique elements
    int i = 0; // slow pointer
    for (int j = 1; j < n; j++) // fast pointer
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j]; // Place the next unique element at position i
        }
    }

    // i + 1 is the count of unique elements
    cout << "Number of unique elements: " << (i + 1) << endl;

    return 0;
}