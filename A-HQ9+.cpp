//A. HQ9+
//https://codeforces.com/problemset/problem/133/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;    cin>>s;
    int n = s.length();
    bool ok = false;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            ok = true;
            break;
        }
    }
    if(!ok){cout << "NO" << endl;}
    return 0;
}