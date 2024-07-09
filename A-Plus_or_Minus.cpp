//A. Plus or Minus
//https://codeforces.com/problemset/problem/1807/A


#include<iostream>
using namespace std;

int main()
{
    int t;        cin>>t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c)
        {    cout << "+" <<endl;    }
        else
        {    cout << "-" <<endl;    }
    }
    return 0;
}