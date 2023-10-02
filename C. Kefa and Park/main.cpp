#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define MP make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define loop(i,a,b) for(int i = a; i <= b; i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)

#define _ ios::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
const int OO = 1e9;

int n, m;
const int N = 1e5 + 5;
vector<int> adj[N];
int val[N];

int dfs(int i, int p, int cats)
{
    if(val[i] && cats + 1 > m)
        return 0;
    int sum = 0;
    int cntr = 0;
    for(auto a:adj[i])
    {
        if(a == p)
            continue;
        cntr ++;
        sum += dfs(a, i, val[i] == 1 ? cats + 1 : 0);
    }
    if(cntr == 0)
        return 1;
    return sum;
}

void answerTC(){
    cin >> n >> m;

    for(int i=1; i<=n; i++)
        cin >> val[i];

    int a, b;
    for(int i=1; i<=n-1; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << dfs(1, 0, 0) << "\n";

}

int main() {

    int t = 1;
//    cin >> t;

    while(t--){
        answerTC();
    }

}