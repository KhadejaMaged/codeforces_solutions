#include <iostream>
#define ll long long
using namespace  std ;
ll maxx = 0;
ll siz , c;
ll sumation(ll arr[], ll k)
{
    if(c==k)
    {
        return 0;
    }
    c++;
    return arr[--siz]+ sumation(arr,k);
}
int main()
{
    ll k;
    cin >>siz >>k  ;
    ll arr[siz];
    for(int i = 0 ; i < siz ; i++)
        cin >>arr[i];

    cout << sumation(arr,k);

    return 0;
}