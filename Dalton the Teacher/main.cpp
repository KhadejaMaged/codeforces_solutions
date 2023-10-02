#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    ll t ;
    cin >> t ;
    while (t--)
    {
        ll n , swap=0; cin >> n ;
        vector<ll>v(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(v[i] ==  i+1)
                swap++;
        }
        if(swap == 0)
            cout <<"0"<<"\n";
        else if (swap%2 == 0)
            cout << swap/2 <<"\n";
        else
            cout << (swap/2)+1 <<"\n";
    }
    return 0;
}
