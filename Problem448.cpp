#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<endl;
    }
    
    return 0;
}
