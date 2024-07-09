//A. Magnets
//https://codeforces.com/problemset/problem/344/A


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int c=0;
    long long int n;        cin>>n;
    vector<int> v(n);
    for(long long int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(long long int i = 0; i < n; i++)
    {
        if(v[i] !=v[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}