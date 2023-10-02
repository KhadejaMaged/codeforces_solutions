#include <iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
        ll n , k , q ,x,y , l , r;
        cin >> n >> k >> q ;
        vector<ll>v(2000005);
        vector<ll>pref(2000005);
        vector<ll>arr2(2000005);
        vector<ll>pref2(2000005);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x >> y ;
            v[x]+=1;
            v[y+1]-=1;
        }
        for(int i = 1 ; i < 2000005 ; i++)
        {
            pref[i] = pref[i-1]+v[i];
        }
        for(int i = 1 ; i < 2000005 ; i++)
        {
            if(pref[i]>=k)
                arr2[i] =1;
            else
                arr2[i]=0;
        }
        for(int i = 1 ; i < 2000005 ; i++)
        {
            pref2[i] = pref2[i-1]+arr2[i];
        }
        while (q--)
        {
            cin >> l >> r ;
            cout<<pref2[r]-pref2[l-1]<<"\n";
        }


    return 0;
}
