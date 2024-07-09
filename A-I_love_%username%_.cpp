//A. I_love_%username%
//https://codeforces.com/problemset/problem/155/A


#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin >>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }

    int max=arr[0],min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            c++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            c++;
        }
    }

    cout << c;

    return 0;
}