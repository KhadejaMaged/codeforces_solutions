#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace  std ;
int main() {

    ll test ; cin >> test ;
    while (test--)
    {
        ll responses ,cnt=0, w , q ; cin >> responses;
        map<ll,ll>mp;
        while (responses--)
        {
            cnt++;
            cin >> w>>q;
            if(w<=10)
            {
                mp[q]+=cnt;
            }

        }
        ll temp = 0, ans=0;
        for(auto it :mp)
        {
            if(it.first>temp)
            {
                temp = it.first;
                ans = it.second;

            }
        }
        cout << ans <<"\n";

    }
    return 0;
}
