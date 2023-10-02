#include <iostream>
#define ll long long
using namespace  std ;
ll siz ;
ll sumation(ll arr[])
{
    if(siz == 0)
    {
        return 0;
    }

    siz--;
    return arr[siz]+ sumation(arr);


}
int main()
{
    cin >>siz ;
    ll arr[siz];
    for(int i = 0 ; i < siz ; i++)
        cin >>arr[i];

    cout << sumation(arr);

    return 0;
}
