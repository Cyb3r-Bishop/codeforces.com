//A. Kefa and First Steps
//https://codeforces.com/problemset/problem/580/A


#include<iostream>
using namespace std;

int main()
{
    long long int n;        cin>>n;
    int a[n];
    int c=0,m=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1])
        {
            c++;
            m=max(m,c);
        }
        else
        {
            c=1;
        }
    }
    cout<<m<<endl;
    
    
    return 0;
}



/*
//A. Kefa and First Steps
//https://codeforces.com/problemset/problem/580/A


#include<iostream>
using namespace std;

int main()
{
    long long int n;        cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx=0;
    int c=0;
    int idea=1;
    for(int i=0; i<n; i++)
    {
        if(a[i]<=a[i+1])
        {   
            c++;
        }
        mx = max(c, mx);

        if(a[i]>a[i+1])
        {   
            c=1;
            idea = 0;
        }
    }
    if(idea==1){mx=mx+1;}
    cout<<mx<<endl;
    
    return 0;
}
*/