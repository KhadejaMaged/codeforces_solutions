#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n)
{
    if(n==1 || n ==0)
        return 1;
    return n * fact(n-1);
}
int main()
{
   ll n ;cin >> n ;
   cout << fact(n);
    return 0;
}
