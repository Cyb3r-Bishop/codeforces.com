//A. Helpful Maths
//https://codeforces.com/problemset/problem/339/A


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int x = s.length();
    int y = x/2;
    string ss = s.substr(y,x);
    int a = ss.length();
    for(int i=0; i<x-y-1; i++)
    {
        cout << ss[i] << "+" ;
    }
    cout << ss[a-1];
    return 0;
}