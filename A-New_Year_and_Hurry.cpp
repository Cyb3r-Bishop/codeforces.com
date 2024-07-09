//A. New Year and Hurry
//https://codeforces.com/problemset/problem/750/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;    cin>>n>>k;
    int t = 4*60 - k;

    int count = 0;
    for(int i=1; i<=n; i++)
    {
        t = t - 5*i;
        if(t < 0) break;

        count++;
    }
    cout << count << endl;
    return 0;
}









