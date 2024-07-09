//A. Greg and Array
//https://codeforces.com/contest/295/problem/A?fbclid=IwAR1iGQbLzxTpR3t4COLgtEBK93csrQJ5Q81S73jaMkuRpx10vhv-HRXRBNU


#include<iostream>
#include<utility>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    ll n,m,k;    cin>>n>>m>>k;
    vector <ll> a(n+2);
    pair < pair <ll, ll> , ll > b[m+2];
    for(ll i=1;i<=n;i++) 
    {
        cin>>a[i];
    }
    for(ll i=1;i<=m;i++)
    {    
        cin>>b[i].first.first>>b[i].first.second>>b[i].second;
    }
    vector<ll> op(m+2);
    while(k--)
    {
        ll x,y;    cin>>x>>y;
        op[x]++; op[y+1]--;
    }
    vector<ll> up(n+2);
    for(ll i=1; i<=m; i++)
    {
        op[i]+=op[i-1];
        ll l= b[i].first.first;
        ll r= b[i].first.second;
        ll d= b[i].second;
        up[l] += d * op[i];
        up[r+1] -= d * op[i];
    }

    for (int i = 1; i <= n; i++)
    {
        up[i]+=up[i-1];
        cout<<a[i]+up[i]<<" ";
    }
    
    return 0;
}


//* Time limit exceeded - test case-26
/* 
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    long long int n,m,k;    cin>>n>>m>>k;
    vector <long long int> a(n+2);
    vector <tuple <long long int, long long int, long long int>> b(m+1);
    for(long long int i=1;i<=n;i++) 
    {
        long long int o;    cin>>o;
        a[i] += o;
        a[i+1] -= o;
    }
    for(long long int i=1;i<=m;i++)
    {
        long long int l,r,d;    cin>>l>>r>>d;
        b[i] = make_tuple(l, r, d);
    }

    while(k--)
    {
        long long int x,y;    cin>>x>>y;
        for(long long int i=x; i<=y; i++)
        {
            a[get<0>(b[i])] += get<2>(b[i]);
            a[get<1>(b[i])+1] -= get<2>(b[i]); 

            //cout<<a[get<0>(b[i])]<<" "<<a[get<1>(b[i])]<<endl;
        }
    }
    for(long long int i=1; i<=n; i++)
    {
        a[i] = a[i] + a[i-1];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
*/