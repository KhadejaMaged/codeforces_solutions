#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    long long n , x ;
    cin >> n >> x ;
    vector<long long>arr(n);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >>arr[i];
    }
    map<ll,ll>mp;
    ll sum = 0 ,cnt = 0 ;
    mp[sum]++;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
        cnt+=mp[sum-x];
        mp[sum]++;
    }
    cout << cnt << "\n";
    return 0;
}
