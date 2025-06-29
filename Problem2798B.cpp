#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target, employ;
    cout << "Enter least target hours: ";
    cin >> target;
    cout << "Enter Number Of Employees: ";
    cin >> employ;

    vector<int> hours(employ);
    int count = 0;

    for (int i = 0; i < employ; i++)
    {
        cin >> hours[i];
        if (hours[i] >= target) // Changed to >= for "at least"
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
