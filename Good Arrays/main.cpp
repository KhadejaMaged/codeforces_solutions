#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll testcase ; cin >> testcase;
    while (testcase--)
    {
        ll n , sum = 0 , sum2 = 0 , cnt = 0; cin >> n ;
        vector<ll>arr(n);
        vector<ll>arr2(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            if(arr[i]>1)
            {
                arr2[i] = 1 ;
            }
            else
            {
                arr2[i] = 2;
            }
            sum+=arr[i];
        }
        for(int i = 1 ; i < n ; i++)
        {
            sum2+=arr2[i];
        }
        sum = sum -sum2;
        if(sum == arr[0])
            cout <<"NO"<<"\n";
        if(n==1)
        {
            cout <<"NO"<<"\n";
        }
        else if(sum <= 0)
        {
            cout <<"NO"<<"\n";
        }
        else
        {
            cout <<"YES"<<"\n";
        }

    }

    return 0;
}