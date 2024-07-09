//A. Anton and Danik
//https://codeforces.com/problemset/problem/734/A


#include<iostream>
using namespace std;

int main()
{
    int n,a=0,d=0;
    cin >> n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
        if(arr[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if(a>d)
    {
        cout << "Anton\n";
    }
    else if(d>a)    
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    return 0;
}