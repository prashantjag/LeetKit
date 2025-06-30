#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long result = 0;
    while (n!=0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    if (result> INT_MAX||result<INT_MIN)
    {
        return 0;
    }
    cout<<result;
    return 0;
}