//A. Tram
//https://codeforces.com/problemset/problem/116/A


#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c=0,max=0;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> a >> b;
        c = c-a+b;
        if(c>max)
        {
            max=c;
        }
    }
    cout <<max;
    return 0;
}