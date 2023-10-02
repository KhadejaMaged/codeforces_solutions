#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll valid(vector<int>v , ll mid , string s , string p)
{
    unordered_set<int>news;
    for(int i = 0 ; i < mid ;i++)
    {
        news.insert(v[i]);
    }
    string ans ="";
    for(int i = 0 ; i < s.size();i++)
    {
        if(news.find(i) == news.end())
        {
            ans+=s[i];
        }
    }
    ll p1 = 0 , p2 = 0 ;
    while(p1<ans.size() && p2<p.size())
    {
        if(ans[p1] == p[p2])
        {
            p1++;
            p2++;
        }
        else
        {
            p1++;
        }
    }
    return p2 == p.size();
}
int main()
{
    string s , p;
    cin >> s >> p ;
    vector<int>arr(s.size());
    for(int i = 0 ; i < s.size() ; i++)
    {
        cin >> arr[i] ;
        arr[i]-=1;
    }
    ll l = 0 , r = s.size() ;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(valid(arr,mid,s,p))
            l = mid + 1 ;
        else
            r = mid - 1 ;
    }
    cout << l-1 << "\n";
}
