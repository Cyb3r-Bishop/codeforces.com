//A. Two Vessels
//https://codeforces.com/contest/1872/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;          cin>>t;
    while(t--)
    {
        double a,b,c;          cin>>a>>b>>c;
        if(a==b)
        {   cout<<"0"<<endl;    }
        else
        {
            double n = abs(a-b)/c;
            cout<<ceil(n/2)<<endl;
        }
    }
    return 0;
}