#include <iostream>
#include<bits/stdc++.h>
using namespace  std ;
int main()
{
    long long n , l = 0 , r =0 , res =INT_MAX;
    set<char> sett;
    cin >> n ;
    string s ;
    cin >> s;
    for(int i = 0 ; i < n ; i++)
    {
        sett.insert(s[i] ) ;
    }
    map<char,long long>mp;
    while(l!=n)
    {
        if(mp.size() != sett.size() && r!=n)
        {
            mp[s[r]]++;
            r++;
        }
        else if(mp.size() == sett.size())
        {
            res = min(res,r-l) ;
            if(mp[s[l]]>1)
            {
                mp[s[l]]--;
            }
            else
            {
                mp.erase(s[l]);
            }
            l++;
        }
        else if(mp.size() != sett.size() && r==n)
        {
            break;
        }
    }
    cout << res ;
}