#include <iostream>
#define ll long long
using namespace  std ;
ll maxx = INT_MIN;
ll siz ;
void sumation(ll arr[])
{
    if(siz == 0)
    {
        cout<< maxx;
        return ;
    }

    siz--;
    if(arr[siz]>maxx)
        maxx=arr[siz];
    sumation(arr);
}
int main()
{
    cin >>siz ;
    ll arr[siz];
    for(int i = 0 ; i < siz ; i++)
        cin >>arr[i];

    sumation(arr);

    return 0;
}
