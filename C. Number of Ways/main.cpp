#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace  std ;
int main()
{
    ll n , sum =0; cin >> n ;
    vector<ll>arr(n) ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    ll count3 = 0 , count2 = 0 , s1 =0 ;
    if(sum%3!=0)
        cout <<"0"<<"\n";
    else
    {
        for(int i = 0 ; i < n-1 ; i++)
        {
            s1+=arr[i];
            if(s1 == 2*sum/3)
            {
                count2+=count3;
            }
            if (s1 == sum/3)
            {
                count3++;
            }
        }
        cout << count2 << "\n";
    }

    return 0;
}
