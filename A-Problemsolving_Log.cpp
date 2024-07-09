//A. Problemsolving Log
//https://codeforces.com/contest/1914/problem/A


#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    int t;          cin>>t;
    while(t--)
    {
        int n;      cin>>n;
        string s;   cin>>s;
        int c = 0;
        sort(s.begin(), s.end());

        int i;
        for(i=0; i<n; i++)
        {
            c = c + int(s[i]) - 64;
            if(c == n)
            {
                cout << c << endl;
                break;
            }
            else if(c > n)
            {
                c = c - (int(s[i]) - 64);
            }
        }

        /*int a[27];
        for(int i=0; i<n; i++)
        {
            a[(int(s[i]))-64]++;
            
        }
        for(int i=1; i<=26; i++)
        {
            if(a[i])
            {
                c = c
            }
        }*/
    }
    return 0;
}