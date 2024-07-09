//A. Gravity Flip
//https://codeforces.com/problemset/problem/405/A


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    
    
    bool swapped;
    for (int i = 0; i < n-1; i++)
    {
        swapped = false;
        for (int j = 0; j < n-1-i; j++)
        {
            if(ara[j]>ara[j+1])
            swap(ara[j],ara[j+1]);
            swapped = true;
        }
        if(swapped == false) break; 
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ara[i]<<" ";
    }
    
    return 0;
}