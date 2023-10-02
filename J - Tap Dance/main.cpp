#include <iostream>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    bool flag = true;
    int index1 = 0 , index2 = 0;
    for(int i = 0;  i< s.size() ; i++)
    {
        if(s[i] == 'L')
        {
            index1 = i+1;
            if(index1%2!=0){
                flag = false;
            }

        }
        else if (s[i] == 'R')
        {
            index2 = i+1;
            if(index2%2==0)
                flag = false;

        }
    }
    if(flag)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}
