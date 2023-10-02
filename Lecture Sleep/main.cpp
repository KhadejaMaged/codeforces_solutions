#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    ll n , k ;
    cin >> n >> k ;
    vector<ll>pref(n);
    vector<ll>arr(n);
    vector<ll>t(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> t[i];
    }
    ll res= 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i)
            pref[i] = pref[i]+pref[i-1];
        if(t[i]==0)
            pref[i]+=arr[i];
        if(t[i]>0)
            res+=arr[i];
    }
    ll ans  = INT_MIN ;
    for(int i = k-1; i < n ; i++)
    {
        ans = max(ans,pref[i] - (i >= k ? pref[i - k] : 0));
    }
    cout << res+ans << "\n";
    return 0;
}
