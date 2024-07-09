//A. Sum
//https://codeforces.com/problemset/problem/1742/A


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;          cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);

        if(a[0]+a[1]==a[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}