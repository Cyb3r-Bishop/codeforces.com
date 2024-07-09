//A. Anton and Letters
//https://codeforces.com/problemset/problem/443/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;        getline(cin, s);
    sort(s.begin(), s.end());
    int l = s.length();
    int count = 0;

    for(int i = 0; i < l; i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ')
        {    continue;    }
        else if(s[i] != s[i+1])
        {    count++;    }
    }
    cout << count << endl;
    return 0;
}