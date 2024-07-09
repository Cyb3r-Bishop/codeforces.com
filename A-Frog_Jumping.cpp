//A. Frog Jumping
//https://codeforces.com/contest/1077/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;    cin>>t;
    while(t--)
    {
        ll a,b,k;    cin>>a>>b>>k;
        ll x = ceil(k/2.0)*a - floor(k/2.0)*b;
        cout << x << endl; 
    }
    return 0;
}