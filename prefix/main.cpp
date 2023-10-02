#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    vector<int>arr(n);
    // 1 based
    vector<int>prefx(n+1) ;
    for(int i =  0 ; i  < n ; i ++)
    {
        cin >> arr[i];
    }
    for(int i =  1 ; i  <=  n ; i ++)
    {
        prefx[i] = prefx[i-1]+arr[i-1];
    }
    for(int i =  1; i  <= n ; i ++)
    {
        cout<< prefx[i] <<  " ";
    }
    return 0;
}
