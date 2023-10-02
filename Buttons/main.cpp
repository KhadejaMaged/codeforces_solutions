#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll testcase ;
    cin >> testcase;
    while (testcase--)
    {
        ll x , y , c ;
        cin >> x >> y >> c ;
        if(x == y)
        {
            if(c%2==0)
                cout <<"Second"<<"\n";
            else
                cout<<"First"<<"\n";
        }
        else if (x !=y)
        {
            ll div = c/2;
            y+=div;
            x+=(c-div);
            if(x>y)
                cout<<"First"<<"\n";
            else
                cout <<"Second"<<"\n";
        }
    }
    return 0;
}
