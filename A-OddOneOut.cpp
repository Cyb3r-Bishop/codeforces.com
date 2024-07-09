//A. Odd One Out
//https://codeforces.com/contest/1915/problem/A


#include<iostream>
using namespace std;

int main()
{
    int t;        cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(b==c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
    return 0;
}