#include <iostream>
#include<bits/stdc++.h>
using namespace  std ;
int main()
{
    long long n , x ,sum =0 , ans=0  ;
    cin >> x ;
    string s ;
    cin >> s ;
    n = s.size();
    map<long long,long long > mp ;
    for(int i = 0 ; i < n   ;i++)
    {
        mp[sum]++;
        cout << i+1 << " " << mp[sum] << "\n";
        sum+=(s[i]-'0');
        cout << i+1 << " " << sum << "\n";
        ans+=mp[sum-x];
        cout << i+1 << " " << mp[sum-x] << "\n";
        cout << i+1 << " " << ans << "\n";

    }
    cout << ans;
}