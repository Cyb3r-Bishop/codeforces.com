//A. Hulk
//https://codeforces.com/problemset/problem/705/A


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    if(n==1)
    {
        cout << "I hate ";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                cout << "I hate ";
            }
            else
            {
                cout << "I love ";
            }

            if(i<n)
            {
                cout << "that ";
            }
        }
    }
    cout << "it";
    return 0;
}