#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    int n , q;
    cin >> n ;
    vector<long long >arr(n);
    vector<long long >prefix(n);
    for(int i = 0 ;  i < n ; i ++)
    {
        cin>>arr[i];
    }
    for(int i = 1 ;  i <= n ; i ++)
    {
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    ll query , l , r; cin >> query ;
    for(int i = 0 ; i < query ; i++)
    {
        cin >> l >> r ;
        cout<<prefix[r+1]-prefix[l]<< "\n";
    }
    return 0;
}
