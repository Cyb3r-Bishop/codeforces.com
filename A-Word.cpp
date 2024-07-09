//A. Word
//https://codeforces.com/problemset/problem/59/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int up=0,low=0;
    cin >> a;
    int n = a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i]-=32;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i]+=32;
            }
        }
    }
    cout << a;
    return 0;
}