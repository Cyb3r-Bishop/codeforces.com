//A. Lucky?
//https://codeforces.com/problemset/problem/1676/A


#include<iostream>
using namespace std;

int main()
{
    int t;        cin>>t;
    while(t--)
    {
        int ticket;    cin>>ticket;
        int n1 = 3, n2 = 3;
        int c1 = 0;

        while(n1--)
        {
            c1 += ticket%10;
            ticket = ticket/10;
        }

        int c2 = 0;
        while(n2--)
        {
            c2 += ticket%10;
            ticket = ticket/10;
        }

        if(c1 == c2)
        {    cout<<"YES"<<endl;    }
        else
        {    cout<<"NO"<<endl;    }
    }
    return 0;
}