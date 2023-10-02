#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll test ; cin >> test;
    while (test--)
    {
        ll temp = 0 ;
        vector<ll>res;
        string s ; cin >> s ;
        for(int i = 0 ; i < s.size();i++)
        {
            if(s[i]=='A')
                temp++;
            else
            {
                res.push_back(temp);
                temp=0;

            }
        }
        res.push_back(temp);
        sort(res.begin(),res.end(),greater<>());

        ll res2 = 0 ;
        for(int i = 0 ; i < res.size()-1;i++)
        {
           res2+=res[i];
        }
        cout<< res2<<"\n";



    }
    return 0;
}
