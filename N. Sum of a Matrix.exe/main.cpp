#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll arr1[100][100] ,arr2[100][100],res[100][100];
ll row , col ;
void sum(ll r1,ll c1)
{
    if(r1==row)
        return;
    if(c1<col)
    {
        sum(r1,c1+1);
    }
    else
    {
        sum(r1+1,0);
    }
    res[r1][c1]= arr1[r1][c1]+arr2[r1][c1];
}
int main()
{
    cin >> row>> col;
    for(int i = 0 ; i < row  ;i ++)
    {
        for(int j =0 ; j < col ; j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i = 0 ; i < row  ;i ++)
    {
        for(int j =0 ; j < col ; j++)
        {
            cin>>arr2[i][j];
        }
    }
    sum(0,0);
    for(int i = 0 ; i < row  ;i ++)
    {
        for(int j =0 ; j < col ; j++)
        {
            cout << res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
