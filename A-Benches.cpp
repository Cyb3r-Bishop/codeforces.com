//A. Benches
//https://codeforces.com/problemset/problem/1042/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s=0,mi=0;        cin >>n>>m;
    float max,min;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];     s+=arr[i];
        if(arr[i]>mi)
        {
            mi=arr[i];
        }
    }
    max=mi+m;
    min=ceil((1.0*m+s)/n);
    cout <<min<<" "<<max<<endl;
    return 0;
}