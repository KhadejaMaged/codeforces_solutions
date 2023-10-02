#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
    ll t ; cin >> t ;
    while (t--)
    {
        ll n , k ;
        cin >> n >> k ;
        vector<ll>a(n);
        vector<ll>h(n);
        for(int  i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        for(int  i = 0 ; i < n ; i++)
        {
            cin>>h[i];
        }
        ll beg = 0 , end = 0 , res = 0 , temp=0;
        while(end<n)
        {
            if(end==beg)
            {
                if(temp+a[end]>k)
                {
                    beg++;
                    end++;
                }
                else
                {
                    temp=a[end];
                    end++;
                }
                res = max(res,end-beg);
            }
            else
            {
                if(h[end-1]%h[end] || temp+a[end]>k)
                {
                    temp-=a[beg];
                    beg++;
                }
                else
                {
                    temp+=a[end];
                    end++;
                }
                res = max(res,end-beg);

            }



        }
        cout<< res <<"\n";
    }
    return 0;
}
