//A. The New Year: Meeting Friends
//https://codeforces.com/problemset/problem/723/A


#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<a[1]-a[0]+a[2]-a[1]<<endl;

    return 0;
}