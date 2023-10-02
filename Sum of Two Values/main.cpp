#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n ,x , y;
    cin >> n >> x ;
    vector<pair<int,int>>arr;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> y ;
        arr.push_back({y,i+1});
    }
    sort(arr.begin(),arr.end());
    bool flag = false;
    int l = 0 , r = n-1 ;
    while(l<r)
    {
        if(arr[l].first+arr[r].first  == x )
        {
            flag = true;
            cout << arr[l].second << " " << arr[r].second <<"\n" ;
            break;
        }
        else if(arr[l].first+arr[r].first < x )
        {
            l++;
        }
        else if(arr[l].first+arr[r].first > x )
        {
            r--;
        }

    }
    if(!flag)
        cout<<"IMPOSSIBLE"<<"\n";
}
