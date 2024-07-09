//A. Vanya and Fence
//https://codeforces.com/problemset/problem/677/A


#include<iostream>
using namespace std;

int main()
{
    int n,h;            cin>>n>>h;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int a;          cin>>a;
        if(a>h){    c++;}   
    }
    cout<<c+n<<endl;
    return 0;
}