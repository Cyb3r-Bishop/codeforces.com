//A. Chat room
//https://codeforces.com/problemset/problem/58/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,s2="hello";
    cin >> s;
    int x=0,y=0,n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==s2[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    {
        cout <<"YES\n";
    }
    else
    {
        cout <<"NO\n";
    }
    return 0;
}