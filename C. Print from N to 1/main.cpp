#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int>v;
void prints( int num) //// 12345
{
    if(num == 0)
    {
        reverse(v.begin(),v.end());
        for(int i = 0 ; i < v.size();i++)
            cout<<v[i];
        return;
    }
    if(num%2==0)
        v.push_back(0);
    else
        v.push_back(1);
    return prints(num/2);

}
int main()
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        prints(n);
        cout<<"\n";
        v.clear();
    }

    return 0;
}
