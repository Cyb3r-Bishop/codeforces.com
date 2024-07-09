//A. Short Substrings
//https://codeforces.com/problemset/problem/1367/A


#include<iostream>
using namespace std;

int main()
{
    int t;          cin>>t;        
    while(t--)
    {
        string b;           cin>>b;
        int n=b.length();
        cout<<b[0]<<b[1];
        for(int i=3;i<n;i+=2)
        {
            cout<<b[i];
        }
        cout<<endl;
    }

    return 0;
}