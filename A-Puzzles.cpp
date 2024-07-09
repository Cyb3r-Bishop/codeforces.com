//A. Puzzles
//https://codeforces.com/problemset/problem/337/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;        cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    int minimum=a[n-1]-a[0];
    int ans;

    for(int i=1;i<=m-n;i++)
    {
        minimum=min((a[i+n-1]-a[i]),minimum);
    }
    cout<<minimum<<endl;

    return 0;
}

/*
//A. Puzzles
//https://codeforces.com/problemset/problem/337/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;        cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    int min=99999999;

    for(int i=0;i<m;i++)
    {
        if((a[i+n-1]-a[i])<min)
        {   min=a[i+n-1]-a[i];    }
        if((i+m)==n)break;
    }
    cout<<min<<endl;

    return 0;
}
*/