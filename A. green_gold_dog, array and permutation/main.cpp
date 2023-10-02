#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll testcase ; cin >> testcase ;
    while(testcase--)
    {
        ll n ; cin >> n ;
        vector<pair<ll,ll>>arr(n);
        vector<ll>res(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(),arr.end() , greater<>());
        for(int i = 0 ; i < n ;i++)
        {
            res[arr[i].second] = i+1;
        }
        for(int i = 0 ; i < n ;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
