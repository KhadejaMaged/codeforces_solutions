#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using namespace  std ;
int main()
{
    ll test ; cin >> test;
    while (test--){
        ll n , k ; cin >> n >> k ;
        vector<ll>arr(n);
        for(int i =0 ; i < n ; i++)
            cin >> arr[i];
        sort(arr.begin(),arr.end());
        ll ans= 0 , mx = INT_MIN;
        for(int i  = 0 ; i < n ; i++)
        {
            ans++;
            if(arr[i+1]-arr[i]>k || i == n-1)
            {
                mx = max(ans,mx);
                ans =0;
            }

        }
        cout << n- mx << "\n";
    }

    return 0;
}
