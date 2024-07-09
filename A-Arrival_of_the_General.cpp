//A. Arrival of the General
//https://codeforces.com/problemset/problem/144/A


#include<iostream>
using namespace std;

int main()
{
    int n;      cin >>n;
    int a[n+1];
    int min=999999,max=0,x,y;

    for(int i=1;i<=n;i++)
    {
        cin >>a[i];
        if(a[i]<=min)
        {
            min=a[i];
            x=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            y=i;
        }
    }

    if(a[1]==max && a[n]==min)
    {
        cout <<"0"<<endl;
    }
    else if(x>y)
    {
        cout <<y-1+n-x<<endl;
    }
    else
    {
        cout <<y-1+n-x-1<<endl;
    }
    return 0;
}