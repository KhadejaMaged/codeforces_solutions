#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    ll testcase;
    cin >> testcase;
    while (testcase--)
    {
        string arr ; cin >> arr;
        ll n  = arr.size();
        vector<ll>pref1(n+1),suff0(n+1) , pref0(n+1) , suff1(n+1);
        ll count0=0,count1=1;
        for(int i = 1; i <= n; i++)
        {
            if(arr[i-1] == '1')
            {
                pref1[i]=pref1[i-1]+count1;
            }
            else
            {
                pref1[i]=pref1[i-1];
            }
        }
        for(int i = n; i > 0; i--)
        {
            if(arr[i-1] == '0')
            {
                count0++;
                suff0[i]=suff0[i-1]+count0;
            }
            else
            {
                suff0[i]=suff0[i-1]+count0;
            }
            if(arr[i-1] == '0' && i==1)
            {
                suff0[i]-=1;
            }
        }
        count1= 0 , count0 = 1 ;
        for(int i = 1; i <= n; i++)
        {
            if(arr[i-1] == '0')
            {
                pref0[i]=pref0[i-1]+count0;
            }
            else
            {
                pref0[i]=pref0[i-1];
            }
        }
        for(int i = n; i > 0; i--)
        {
            if(arr[i-1] == '1')
            {
                count1++;
                suff1[i]=suff1[i-1]+count1;
            }
            else
            {
                suff1[i]=suff1[i-1]+count1;
            }
            if(arr[i-1] == '1' && i==1)
            {
                suff1[i]-=1;
            }
        }
        ll ans = INT_MAX , ans2 = INT_MAX;
        for(int i = 1 ; i<= n ; i++)
        {
            if(i==n)
            {
                ans2 = min(ans2,pref0[i]);
            }
            else
            {
                ans2 = min(ans2,pref0[i]+suff1[i+1]);
            }
        }
        for(int i = 1 ; i<= n ; i++)
        {
            if(i==n) {
                ans = min(ans,pref1[i]);
            }
            else
            {
                ans = min(ans,pref1[i]+suff0[i+1]);
            }
        }
        ll minum = min(ans,ans2);
        cout <<minum <<"\n";
    }

    return 0;
}
