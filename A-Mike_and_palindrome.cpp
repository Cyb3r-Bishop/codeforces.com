//A. Mike and palindrome
//https://codeforces.com/contest/798/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;       cin>>a;
    int c=0,n;
    n=a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            c++;
        }
    } 
    if(c==2)
    {
        cout<<"YES"<<endl;
    }
    else if(n%2==1 and c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}