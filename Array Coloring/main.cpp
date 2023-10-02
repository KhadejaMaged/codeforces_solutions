#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    ll testcase , n , sum ;
    cin >> testcase;
    while(testcase--)
    {
        sum = 0;
        cin >> n ;
        vector<int>arr(n);
        for(int i = 0 ; i <n ;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        cout << (sum % 2 == 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}
