#include <iostream>
#include <bits/stdc++.h>
#define  ll  long long
using namespace std;
int n ;
vector<ll>c;
ll valid(ll mid ,vector<pair<pair<int,int>,int>>v,ll n,ll m)
{
    c.clear();
    ll balloncount;
    ll c1 = 0 ;
    for(int i = 0 ; i < n;i++)
    {
        ll t = v[i].first.first;

        while(t<=mid)
        {
            balloncount++;
            if(balloncount%v[i].first.second == 0)
            {
                t+=(v[i].first.first+v[i].second);
            }
            else
            {
                t+=v[i].first.first;
            }
        }
        c.push_back(balloncount);
    }
    for(int i = 0 ; i < n;i++)
    {
        c1+=c[i];
    }
    return c1 >=m;
}
int main()
{
    int m ;
    cin >> m>>n;
    vector<pair<pair<int,int>,int>>v;
    vector<ll>ans;
    for(int i = 0 ; i < n ; i++)
    {
        int t , z , y;
        cin >> t >> z >> y;
        v.push_back({{t,z},y});
    }
    ll l = 0 , r = 2e10, answer;
    while(r >= l)
    {
        ll mid = (l + r)/2;
        if(valid(mid,v,n,m))
        {
            answer = mid;
            r = mid-1;
            ans = c ;

        }
        else
        {
            l = mid + 1;
        }
    }
    cout<<answer<<"\n";
    for(int i = 0 ; i < n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}