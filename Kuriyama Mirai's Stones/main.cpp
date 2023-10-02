#include <iostream>
#include<bits/stdc++.h>
typedef  long long ll;
#define ll long long
#define all(v)				((v).begin()), ((v).end())
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n , k , l , r , m;
    cin >> n ;
    vector<ll>v(n+1) , pref(n+1) , v2(n+1) , prefsort(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >>v[i];
        v2 = v ;
        pref[i] = pref[i-1] +v[i];
    }
    sort(all(v2));
    for(int i = 1 ; i <= n ; i++){
        prefsort[i] = prefsort[i-1]+v2[i];
    }
    cin >> k ;
    while (k--)
    {
        cin >> m >> l >> r ;
        l--;
        if(m==1) {
            cout << pref[r] - pref[l] << " "<<"\n";
        }
        else
        {
            cout << prefsort[r]-prefsort[l]<<"\n";
        }

    }
    return 0;
}
