#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using namespace std ;

bool valid(ll n , ll x , ll y, ll mid)
{
    if(mid<min(x,y))
        return false;
    ll rem = mid-min(x,y);
    return  ((rem/x)+(rem/y)+1>=n);
}


int main()
{
    ll n , x , y ;
    cin >> n >> x >> y ;
    ll l = 0 , r = max(x,y)*n ;
    while(l<=r)
    {
        ll mid = l+(r-l)/2 ;
        if(valid(n,x,y,mid))
            r = mid-1;
        else
            l = mid+1;
    }
    cout << l ;
    return 0;
}
