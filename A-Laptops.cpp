//A. Laptops
//https://codeforces.com/problemset/problem/456/A


#include<bits/stdc++.h>
using namespace std;

void see()
{
    int n,a,b;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>a>>b;
        if(b>a)
        {
            cout <<"Happy Alex\n";
            return ;
        }
    }
    cout <<"Poor Alex\n";
}

int main()
{
    see();
    return 0;
}


/*int main()
{
    int n,a,b,id=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>a>>b;
        if(b>=a)
        {
            id++;
            break;
        }
    }
    if(id==n)
    {
        cout <<"Happy Alex\n";
    }
    else if(id>0 && id!=n)
    {
        cout <<"Happy Alex\n";
    }
    else
    {
        cout <<"Poor Alex\n";
    }
    return 0;
}*/


/*int main()
{
    int n;
    cin >>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];
    }
    int mina=99999,j=0;
    for(int i=0;i<n;i++)
    {
        if(mina>a[i])
        {
            mina=a[i];
            j=i;
        }
    }
    int idea=0;
    for(int i=0;i<n;i++)
    {
        if(b[j]>b[i])
        {
            idea++;
        }
    }

    if(idea>0)
    {
        cout <<"Happy Alex\n";
    }
    else
    {
        cout <<"Poor Alex\n";
    }
    return 0;
}*/