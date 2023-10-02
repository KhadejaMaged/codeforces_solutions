#include <iostream>
#include <vector>
#include<string>
using namespace std ;
int main()
{
    bool flag = true ;
    string s , t ;
    cin >> s >> t ;
    if(t.size() - s.size() == 1)
    {
        for(int i = 0 ; i <s.size();i++)
        {
            if(s[i] == t[i])
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        flag = false;
    }
    if(flag)
        cout <<"Yes";
    else
        cout <<"No";

}
