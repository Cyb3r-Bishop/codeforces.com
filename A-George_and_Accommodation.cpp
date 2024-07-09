//A. George and Accommodation
//https://codeforces.com/problemset/problem/467/A


#include<iostream>
using namespace std;

int main()
{
    int n;          cin>>n;
    int c=0;
    while(n--)
    {
        int p,q;      cin>>p>>q;
        if((q-p)>=2){  c++;    } 
    }
    cout<<c<<endl;
    return 0;
}