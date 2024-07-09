//A. Football
//https://codeforces.com/problemset/problem/96/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string f;
    cin >> f;
    int n = f.length();
    int a=0;
    for(int i=0; i<n; i++)
    {
        if((f[i]==f[i+1])&&(f[i+1]==f[i+2])&&(f[i+2]==f[i+3])&&(f[i+3]==f[i+4])&&(f[i+4]==f[i+5])&&(f[i+5]==f[i+6]))
        {
            cout << "YES";
            a++;
            break;
        }
    }
    if(a==0)
    {
        cout << "NO";
    }
    return 0;
}