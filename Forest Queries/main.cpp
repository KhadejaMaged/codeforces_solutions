
#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int row , k , fromrow , fromcol , torow , tocol;
    cin >> row >>k;
    int arr[row][row];
    int prefix[row][row];
    char c ;
    for(int i = 0 ; i < row ; i++)
    {
        for(int j =0 ; j < row ; j++)
        {
            cin >> c ;
            if(c=='*')
                 arr[i][j]=1;
            else
                arr[i][j]=0;
        }
    }
    prefix[0][0] = arr[0][0];
    for(int i = 1 ; i < row ; i++)
    {
        prefix[0][i] = prefix[0][i-1]+arr[0][i];
    }
    for(int i = 1 ; i < row ; i++)
    {
        prefix[i][0] = prefix[i-1][0]+arr[i][0];
    }
    for(int i = 1 ; i < row ; i++)
    {
        for(int j =1 ; j < row ; j++)
        {
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+arr[i][j];
        }
    }
    while(k--)
    {
        cin >> fromrow >> fromcol >> torow >> tocol ;
        fromrow--,fromcol--,torow--,tocol--;
        cout << prefix[torow][tocol]-prefix[fromrow-1][tocol] - prefix[torow][fromcol-1] +prefix[fromrow-1][fromcol-1]  << "\n" ;
    }
    return 0;
}