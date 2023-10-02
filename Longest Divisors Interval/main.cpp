#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace  std ;
int main()
{
    ll t ;cin >> t;
    while (t--)
    {
        ll n ; cin >> n;
        vector<ll>arr1(n),arr2(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr1[i];
        }
        arr2 =arr1;
        sort(arr2.begin(),arr2.end());
        bool ok = true;
        for(int i = 0 ; i < n ; i++)
        {
            if(abs(arr2[i]-arr1[i])%2!=0)
                ok = false;

        }
        if(ok)
            cout<<"YES"<<"\n";
        else
            cout <<"NO"<<"\n";
    }
    return 0;
}
