#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std ;
int Bs(vector<int>arr , int n , int h)
{
    int lo = 0 , hi = 1e18+7 , mid, ans=0 ;
    vector<int>arr2;
    arr2=arr;
    while(lo<=hi)
    {
        mid = lo+(hi-lo)/2 ; // number of days lw n day nf3 yeb2a n+1 day naf3 aked f habd2 ashof n-1 days
        int add1 = (mid+1)/2;
        int add2 = mid/2;
        bool flag = true;
        for(int i = 0 ; i< n ;i++)
        {
            int d = h-arr[i];
            int req = d/2;
            if(add2<=req)
            {
                arr[i]+=(add2*2);
                add2=0;
                break;
            }
            else
            {
                add2-=req;
                arr[i]+=(req*2);
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] == h)continue;
            int d = (h-arr[i]);
            if(add1<d)
            {
                flag = false ;
                break;
            }
            else
            {
                arr[i]+=d;
                add1-=d;
            }
        }

        if(flag)
        {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
        arr= arr2;

    }
    return ans;
}
int32_t main()
{
    int testcase , n , maxx=INT_MIN;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n ;
        vector<int>arr(n);
        for(int i = 0 ; i < n ;i++)
        {
            cin>>arr[i];
            maxx = max(arr[i],maxx);
        }
        int f1 = Bs(arr,n,maxx);
        int f2 = Bs(arr,n,maxx+1);
        cout<< min(f1,f2)<<"\n";
    }
    return 0;
}
