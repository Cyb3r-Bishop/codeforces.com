//A. New Year Candles
//https://codeforces.com/problemset/problem/379/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;    cin>>a>>b;
    int hour = 0;
    int reminder = 0;
    while(a)
    {
        hour += a;
        reminder += a % b;
        a = a/b;
        if(reminder >= b)
        {
            a++;
            reminder = reminder%b;
        }
    }
    cout << hour << endl;
    return 0;
}