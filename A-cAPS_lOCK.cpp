//A. cAPS lOCK
//https://codeforces.com/problemset/problem/131/A


#include<bits/stdtr1c++.h>
using namespace std;

void change(int l,string s)
{
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
        else
        {
            s[i]+=32;
        }
    }
    cout <<s;
}

int main()
{
    string s;       cin >>s;
    int l=s.length();
    int a;

    if(l==1)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]-=32;
        }
        else
        {
            s[0]+=32;
        }
        cout <<s;
        return 0;
    }

    for(int i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            a++;
        }
    }

    if(s[0]>='a' && s[0]<='z' && a==l-1)
    {
        change(l, s);
    }
    else if(l==a)
    {
        change(l,s);
    }
    else
    {
        cout <<s;
    }
    return 0;
}


/*
int main()
{
    string s;       cin >>s;
    int l=s.length();
    if(l==1)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]-=32;
        }
        else
        {
            s[0]+=32;
        }
    }
    else
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]-=32;
        }
        for(int i=1;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
        }
    }

    cout <<s<<endl;

    return 0;
}
*/