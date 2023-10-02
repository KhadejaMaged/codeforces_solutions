#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
using  namespace  std ;
int main()
{
    ll test ; cin >> test ;
    while (test--)
    {
        char arr[8][8];
        string s ="";
        for(int i = 0 ; i < 8; i++)
        {
            for(int j = 0 ;  j< 8 ; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0 ; i < 8; i++)
        {
            for(int j = 0 ;  j< 8 ; j++)
            {
                if(arr[i][j]!='.')
                    s+=arr[i][j];
            }
        }
        cout << s <<"\n";

    }


}
