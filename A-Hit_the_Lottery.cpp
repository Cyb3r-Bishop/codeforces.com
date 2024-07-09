//A. Hit the Lottery
//https://codeforces.com/problemset/problem/996/A


#include<iostream>
using namespace std;

int main()
{
    int n;        cin>>n;
    int bills = 0;
    int x;

    x = n/100;
    bills += x;
    n = n%100;

    x = n/20;
    bills += x;
    n = n%20;

    x = n/10;
    bills += x;
    n = n%10;

    x = n/5;
    bills += x;
    n = n%5;

    x = n/1;
    bills += x;
    n = n%1;

    cout << bills << endl;
    return 0;
}