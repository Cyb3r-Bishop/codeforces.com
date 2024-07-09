//A. Soldier and Bananas
//https://codeforces.com/problemset/problem/546/A


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int k,n,w,m=0;
    cin >>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        m=m+i*k;
    }
    if(m>n)
    {
        cout << abs(m-n);
    }
    else
    {
        cout <<"0";
    }
    return 0;
}