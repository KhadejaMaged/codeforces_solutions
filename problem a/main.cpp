#include <iostream>
#include <bits/stdc++.h>
# define ll long long int
using namespace  std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test ; cin >> test ;
    while (test--)
    {
        ll n , min_bits = 0 , max_bits =0;
        cin >> n  ;
        string s ; cin >> s ;
        for(int i = 0 ; i < s.size()/2 ; i++)
        {
            if(s[i] == s[s.size()-i-1])
            {
                max_bits+=2;
            }
            else
            {
                max_bits++;
                min_bits++;
            }
        }
        if(s.size()%2==1)
        {
            max_bits++;
        }
        for(int i = max_bits+1 ; i< n+1;i++)
        {
            cout <<"0";
        }
        if(max_bits%2==1)
        {
            for(int i = max_bits ; i>=min_bits;i--)
            {
                cout <<"1";
            }
        }
        if(max_bits%2==0)
        {
            if(max_bits-min_bits>1)
            {
                for(int i = max_bits ; i>=min_bits;i--)
                {
                    if(i%2==0)
                       cout <<"1";
                    else
                        cout<<"0";
                }
            }
            else
            {
                for(int i = max_bits ; i>=min_bits;i--)
                {

                    cout <<"1";
                }
            }

        }
        for(int i = 0 ; i < min_bits ; i++)
        {
            cout<<"0";
        }

        cout <<"\n";
    }

    return 0;
}
