//A. Petya and Strings
//https://codeforces.com/problemset/problem/112/A


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string a1,a2;
    int c=0;
    //int na1=0,na2=0;
    cin >> a1 >> a2 ;
    //sort(a1.begin(),a1.end());
    //sort(a2.begin(),a2.end());
    int n = a1.length();

    for(int i=0; i<n; i++)
    {
        if(a1[i]>='a' && a1[i]<='z')
        {
            a1[i]-=32;
        }
        //na1+=a1[i];
    }

    for(int j=0; j<n; j++)
    {
        if(a2[j]>='a' && a2[j]<='z')
        {
            a2[j]-=32;
        }
        //na2+=a2[j];
    }

    for(int i=0; i<n; i++)
    {
        if(a1[i]>a2[i])
        {
            cout << "1";
            break;
        }
        else if(a1[i]<a2[i])
        {
            cout << "-1";
            break;
        }
        else
        {
            c++;
        }
    }
    if(c==n)
    {
        cout << "0";
    }

    return 0;
}


    /*if(a1[n-1]>='a' && a1[n-1]<='z')
    {
        a1[n-1]-=32;
    }  
    if(a2[n-1]>='a' && a2[n-1]<='z')
    {
        a2[n-1]-=32;
    }  


    if(a1[n-1]==a2[n-1])
    {
        cout << "0";
    }
    else if(a1[n-1]<a2[n-1])
    {
        cout << "-1";
    }
    else
    {
        cout << "1";
    }
    return 0;

}*/
    /*for(int i=0; i<(a1.length()); i++)
    {
        if(a1[i]>='a' && a1[i]<='z')
        {
            a1[i]-=32;
        }
        na1+=a1[i];
    }
    for(int j=0; j<(a2.length()); j++)
    {
        if(a2[j]>='a' && a2[j]<='z')
        {
            a2[j]-=32;
        }
        na2+=a2[j];
    }
    if(na1==na2)
    {
        cout << "0";
    }
    else if(na1<na2)
    {
        cout << "-1";
    }
    else
    {
        cout << "1";
    }
    return 0;
}*/
