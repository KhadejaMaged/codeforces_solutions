#include <bits/stdc++.h>

#define ll long long
#define all(a) a.begin(), a.end()
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void Adham() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = 1e3 + 5;
const ll MOD = 1e9 + 7;
const ll inf = INFINITY;
int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};

ll bs(vector<ll> &arr, ll ma){
    ll beg = 0, end = 1e18, ans;
    while(end >= beg){
        ll mid = (end+beg)/2;
        ll even = mid/2, odd = (mid+1)/2;
        bool check = true;
        for (int i = 0; i < arr.size(); ++i) {
            ll diff = ma-arr[i];
            if(diff%2)
            {
                odd--;
                diff--;
            }
            ll dec = min(even, diff/2);
            diff -= dec*2;
            even -= dec;
            ll dec2 = min(odd, diff);
            diff -= dec2;
            odd -= dec2;
            if(diff){
                check = false;
            }
        }
        if(!check || odd < 0){
            beg = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll ma = -inf;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        ma = max(ma, arr[i]);
    }
    cout << min(bs(arr, ma), bs(arr, ma+1)) << endl;
}

int main() {
    Adham();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
    }
}