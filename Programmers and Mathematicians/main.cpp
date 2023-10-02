#include <iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m, h, k;
        cin >> n >> m >> k >> h;
        vector<ll> arr(n);
        ll res = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(abs(h-arr[i])%k == 0 && abs(h-arr[i])/k < m)
                res++;
        }
        cout << res << endl;
    }
    return 0;
}
