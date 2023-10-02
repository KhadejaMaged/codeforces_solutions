#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std ;
//ll fib(ll n)
int main()
{
    ll n ; cin >> n ;
    ll start  = 0 , second  = 1 ;
    if(n==1)
        cout<<start;
    else if (n==2)
        cout << second;
    else
    {
        ll  sum;
        for(int i = 3 ; i<=n ; i++)
        {
             sum = start+second;
             start=second;
             second=sum;
        }
        cout<<sum;
    }

    return 0;
}
