//A. Expression
//https://codeforces.com/problemset/problem/479/A


#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector <long long int>
#define vin vector <int>
#define pb() push_back()
#define ff(i, n) for(int i = 0; i < n; i++)
#define fb(i, n) for(int i = n; i > 0; i--)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define Code_By_Arif_Foysal  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 1e5+10;

int main()
{
    Code_By_Arif_Foysal

    int a,b,c;    cin>>a>>b>>c;
    int r1,r2,r3,r4,r5;
    r1 = a+b*c;
    r2 = a*(b+c);
    r3 = a*b*c;
    r4 = (a+b)*c;
    r5 = a+b+c;

    int ans = max(r1, max(r2, max(r3, max(r4, r5))));
    cout<<ans<<endl;
    return 0;
}

/* 
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;          cin>>a>>b>>c;
    if(a==1 && b==1 && c==1)
    {   cout<<a+b+c<<endl;    }
    else if(a==1)
    {
        cout<<(a+min(b,c))*max(b,c)<<endl;
    }
    else if(b==1)
    {
        cout<<(b+min(a,c))*max(a,c)<<endl;
    }
    else if(c==1)
    {
        cout<<(c+min(b,a))*max(b,a)<<endl;
    }
    else
        cout<<a*b*c<<endl;
    return 0;
}
*/