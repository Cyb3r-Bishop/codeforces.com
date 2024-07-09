//A. Square
//https://codeforces.com/contest/1921/problem/0


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        int b = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);

        if(a<=b){cout<<a<<endl;}
        else{cout<<b<<endl;}
    }
    return 0;
}