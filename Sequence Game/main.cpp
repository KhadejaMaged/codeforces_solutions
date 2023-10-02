#include <iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ll testcase ;
    cin >> testcase;
    while(testcase--)
    {
        ll n ; cin >> n ;
        ll arr[n];
        for(int i = 0 ; i < n ; i++)
            cin >>arr[i];
        vector<int>v;
        for(int i = n-1 ; i>0 ; i--)
        {
            if(arr[i]>=arr[i-1])
                v.push_back(arr[i]);
            else
            {
                v.push_back(arr[i]);
                v.push_back(arr[i]);
            }
        }
        v.push_back(arr[0]);
        reverse(v.begin(),v.end());
        cout<<v.size()<<"\n";
        for(int i = 0 ; i < v.size() ;i++)
            cout << v[i] <<" ";
        cout<<'\n';
    }

    return 0;
}