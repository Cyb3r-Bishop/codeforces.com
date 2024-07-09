//A. IQ test
//https://codeforces.com/problemset/problem/25/A


#include<iostream>
using namespace std;

int main()
{
    int n,j=0,b=0;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]%2==0)
        {
            j++;
        }
        else
        {
            b++;
        }
    }

    if(j>b)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                cout <<i+1;
            }
        }
    }
    if(j<b)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout <<i+1;
            }
        }
    }
    return 0;
}