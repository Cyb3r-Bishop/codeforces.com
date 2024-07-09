//A. Short Sort
//https://codeforces.com/contest/1873/problem/A


#include<iostream>
using namespace std;

int main()
{
    int t;          cin>>t;
    while(t--)
    {
        char a[3];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        int c=0;
        if(a[0]!='a') c++;
        if(a[1]!='b') c++;
        if(a[2]!='c') c++;
        if(c==0 || c==2)
        {   cout<<"YES"<<endl;  }
        else
        { cout<<"NO"<<endl; }

    }
    return 0;
}