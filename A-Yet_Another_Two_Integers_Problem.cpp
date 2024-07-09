//A. Yet Another Two Integers Problem\
//https://codeforces.com/problemset/problem/1409/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;         cin>>t;
    while(t--)
    {
        int a,b;    cin>>a>>b;
        int c=abs(a-b);
        if(c==0){   cout<<"0"<<endl;    }
        else
        {
            int ans=c/10;
            if(c%10==0){ cout<<ans<<endl; }
            else{ cout<<ans+1<<endl; }
        }
    }
    return 0;
}