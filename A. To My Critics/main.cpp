#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using namespace  std ;
int main()
{
    ll t ; cin >> t ;
    while (t--)
    {
        ll a , b , c , sum1=0 , sum2=0,sum3=0;
        cin >> a >> b >> c ;
        sum1=a+b;
        sum2=a+c;
        sum3= b+c;
        if(sum1 >=10||sum2>=10||sum3>=10)
            cout <<"YES"<<"\n";
        else
            cout <<"NO"<<"\n";
    }
    return 0;
}
