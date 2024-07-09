//A. Marathon
//https://codeforces.com/problemset/problem/1692/A


#include<iostream>
#include<algorithm>
using namespace std;

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int a[4];
    cin >>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >>a[j];
        }

        int key = a[0];
        sort(a,a+4,greater<int>());

       for(int l=0;l<4;l++)
        {
            if(key==a[l])
            {
                cout << l <<"\n";
            }
        }
    }
    return 0;
}