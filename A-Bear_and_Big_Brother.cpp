//A. Bear and Big Brother
//https://codeforces.com/problemset/problem/791/A


#include<iostream>
using namespace std;

int main()
{
    int l,b,y=0;
    cin >> l >> b;
    while (b>=l)
    {
        b = b*2;
        l = l*3;
        y++;
    }
    cout << y;
    
    return 0;
}