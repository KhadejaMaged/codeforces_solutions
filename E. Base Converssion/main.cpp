#include <iostream>
#define ll long long
using namespace std ;
void decimal(ll n)
{
    if  (n==0)
        return;
    decimal(n/2);
    cout << n%2;

}
int main()
{
    ll t ; cin >> t ;
    while (t--)
    {
        ll num ; cin >> num ;
        decimal(num);
        cout <<"\n";
    }

    return 0;
}
