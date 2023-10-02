#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(){
    Faster;
    ll t;                  cin>>t;
    while(t--){
        int n;               cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll ans=LLONG_MAX;
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag = false;
                break;
            }
            ans=min(ans,((a[i]-a[i-1])/2LL)+1LL);
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}