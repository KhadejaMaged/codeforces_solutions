#include <iostream>
#include <bits/stdc++.h>
#define ll long double
using namespace  std ;
ll valid(ll mid , ll c)
{
    return pow(mid,2) + sqrt(mid) >= c ;
}
int main() {
    ll c ; cin >> c ;
    long double l =  0 , r = 1e10  , ans =0;
    while (r-l>=1e-6)
    {
        ll mid = (l+r)/2 ;
        if(valid(mid,c))
        {
            ans = mid ;
            r = mid;

        }
        else
            l = mid;
    }
    cout <<setprecision(10) << fixed <<ans <<"\n" ;
    return 0;
}
