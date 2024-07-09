//A. Escalator Conversations
//https://codeforces.com/contest/1851/problem/A


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n,m,k,H,c=0;
        cin >>n>>m>>k>>H;
        int h[n];
        int hh[n];
        for(int j=0;j<n;j++)
        {
            cin >>h[j];
            hh[j]=abs(h[j]-H);
            if((hh[j]<=(m*k-3)) && (hh[j]%k)==0)
            {
                c++;
                if(hh[j]==0)
                {
                    c--;
                }
            }
        }
        cout <<c<<"\n";
    }
    return 0;
}