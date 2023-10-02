#include <iostream>
#include <vector>
using namespace  std ;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n , k;
    cin >> n >> k ;
    int arr[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin>>arr[i] ;
    }
    long long l = 0 , sum = 0 , res =0 , r =0;
    while(r!=n || l !=n)
    {
        if(sum == k)
            res++; //1
        if(sum <= k && r<n)
        {
            sum+=arr[r];
            r++;
        }
        if(sum>k || r == n)
        {
            sum-=arr[l] ;
            l++;
        }

    }
    cout << res ;
    return 0;
}
