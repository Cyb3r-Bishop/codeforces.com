//A. Twins
//https://codeforces.com/problemset/problem/160/A


#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

    int n,j=0,k=0;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        j+=a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        k+=a[i];
        if(k>(j/2))
        {
            cout <<i+1;
            break;
        }
    }
    return 0;
}