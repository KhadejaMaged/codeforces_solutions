#include <iostream>
#include <bits/stdc++.h>
#define  ll long long  ;
using namespace std ;
bool compare(pair<long long , long long>p1 ,pair<long long , long long>p2)
{
    if(p1.second==p2.second)
        return p1.second<p2.second;
    else
        return p1.first>p2.first;
}
int main()
{
    long long test ,l , r; cin >>test;
    map<long long , long long >pref;
    while (test--)
    {
        cin >> l >> r ;
        pref[l]+=1;
        pref[r]-=1;
;
    }


    long long  ind , cnt = 0 , ans= 0, temp =0;
    for(auto it : pref)
    {
        cnt+=it.second;
        if(cnt>temp)
        {
            temp = cnt ;
            ind = it.first;
        }
        ans = max(cnt,ans);
    }
    cout << ind <<" "<<ans<<"\n";
    return 0;
}