//A. String Task
//https://codeforces.com/problemset/problem/118/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin >> a ;
    int x = a.length();
    for(int i=0; i<x; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i] += 32;
        }
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            continue;
        }
        cout << "." << a[i];
        
    }
    return 0;
}