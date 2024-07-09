//A. Recovering a Small String
//https://codeforces.com/contest/1931/problem/A


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;    cin>>t;
    while(t--)
    {
        int n;    cin>>n;
        if(n == 78)
        {    cout<<"zzz"<<endl;    }
        else if(n <= 78 && n > 52)
        {
            char c = 96 + n - 52;
            cout<<c<<"zz"<<endl;
        }
        else if(n == 27)
        {    cout<<"aay"<<endl;    }
        else if(n <= 52 && n > 26)
        {
            char c = 96 + n - 26 - 1;
            cout<<"a"<<c<<"z"<<endl;
        }
        else
        {
            char c = 96 + n - 2;
            cout<<"aa"<<c<<endl;
        }
    }
    return 0;
}