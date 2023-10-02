#include <iostream>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    string newstring ="000" ,newstring_2 = "000" ;
    newstring[0]= s[1];
    newstring[1]= s[2];
    newstring[2]=s[0];
    newstring_2[0] = s[2];
    newstring_2[1] = s[0];
    newstring_2[2] = s[1];
    int a = stoi(newstring);
    int b = stoi(newstring_2);
    int c = stoi(s);
    cout << a+b+c <<"\n";
}
