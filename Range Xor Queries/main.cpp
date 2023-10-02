#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    ll n , q;
    cin >> n >> q  ;
    vector<long long >arr(n);
    vector<long long >prefix(n+1);
    for(int i = 0 ;  i < n ; i ++)
    {
        cin>>arr[i];
    }
    for(int i = 1 ;  i <= n ; i ++)
    {
        prefix[i]=prefix[i-1]^arr[i-1];
    }
    ll  l , r;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> l >> r ;
        cout<<(prefix[r]^prefix[l-1])<< "\n";
    }
    return 0;
}