//A. YES or YES?
//https://codeforces.com/problemset/problem/1703/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string y;
        cin >> y;
        if((y[0]=='Y'||y[0]=='y')&&(y[1]=='E'||y[1]=='e')&&(y[2]=='S'||y[2]=='s'))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}