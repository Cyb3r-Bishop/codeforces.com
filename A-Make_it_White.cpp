//A. Make it White
//https://codeforces.com/contest/1927/problem/0


#include<iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int result = s.rfind('B') - s.find('B') + 1;
        cout<<result<<endl;
    }
    return 0;
}