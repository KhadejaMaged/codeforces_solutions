#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using  namespace  std ;
int main() {


    ll t ;
    cin >> t ;
    while (t--)
    {
        ll n , k ; cin >> n  >> k ;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >>v[i];
        }
        ll l = 0 , r = 1e10, ans =0;
        while (l<=r)
        {
            ll mid = (l+r)/2;
            ll sum =0;
            for(int i = 0 ; i < v.size() ; i++)
            {
                if(v[i]<=mid)
                    sum+=mid-v[i];
            }
            if(sum<=k)
            {
                l = mid+1;
                ans = mid ;

            }
            else
            {
                r = mid-1;

            }

        }
        cout << ans<<"\n";

    }
    return 0;
}