#include <iostream>
#define  ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , x , y;
    cin >> n >> x ;
    vector<pair<int,int>>arr;
    for(int i = 0 ; i < n ;i++)
    {
        cin>>y;
        arr.push_back({y,i+1});
    }
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n ;i++)
    {
        ll x2 = x-arr[i].first;
        for(int j = i+1 ,k = n-1 ; j< k ; j++ )
        {
            while(arr[j].first+arr[k].first >x2)
                k--;
            if(j<k && arr[j].first+arr[k].first==x2)
            {
                cout<<arr[i].second<<" "<<arr[j].second<<" "<<arr[k].second;
                return  0 ;
            }
        }
    }
    cout <<"IMPOSSIBLE";
}
