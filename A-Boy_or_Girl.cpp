//A. Boy or Girl
//https://codeforces.com/problemset/problem/236/Aclear


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a;
    cin >> a ;
    sort(a.begin(),a.end());
    int l = a.length();
    int n=0;
    for(int i=0; i<l; i++)
    {
        if(a[i]==a[i+1])
        {
            n++;
        }
    }
    if((l-n+1)%2==1)
    {
        cout << "CHAT WITH HER!" ;
    }
    else
    {
        cout << "IGNORE HIM!" ;
    }
    return 0;
}