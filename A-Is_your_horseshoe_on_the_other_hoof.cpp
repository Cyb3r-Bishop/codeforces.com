//A. Is your horseshoe on the other hoof?
//https://codeforces.com/problemset/problem/228/A


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n[4];
    int c=0;
    for(int i=0; i<4; i++)
    {
        cin>>n[i];
    }
    sort(n,n+4);
    for(int i=0; i<4; i++)
    {
        if(n[i]==n[i+1])
        {   c++;    }
    }
    cout<<c<<endl;
    return 0;
}