//A. Floor Number
//https://codeforces.com/problemset/problem/1426/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;          cin>>t;
    while (t--)
    {
        double n,x;    cin>>n>>x;
        if(n==1 && x==1)
        { 
            int f = 1;
            cout<<f<<endl;
        }
        else
        {
            n = n-2;
            int f = 1 + ceil(n/x);
            cout<<f<<endl;
        }
    }
    
    return 0;
}