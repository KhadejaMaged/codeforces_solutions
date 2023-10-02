#include <iostream>
using namespace std;
int main()
{
    string s ;
    cin >> s ;
    string newsstring ="0000";
    int index = 0 ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '1')
        {
            newsstring[i+1]= '1';
        }
    }
    cout << newsstring ;

    return 0;
}
