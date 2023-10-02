#include <iostream>
#include <vector>

# define  ll long long
using namespace std ;
int main()
{
    string s , t;
    cin >> s >> t ;
    vector<int>v;
    for(int i = 0 ; i < s.size() ; i++)
    {
        v.push_back(((s[i]-'a') - (t[i]-'a'))) ;
    }
    bool flag = true;
    for (int i = 0 ; i < v.size()-1;i++)
    {
        if(v[i] == v[i+1])
            continue;
        else{
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout <<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

}
