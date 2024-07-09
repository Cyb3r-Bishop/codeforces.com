//A. Young Physicist
//https://codeforces.com/problemset/problem/69/A


#include<iostream>
using namespace std;

int main()
{
    int n,ai=0,aj=0,ak=0;
    cin >>n;
    int a[3];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> a[j];
        }
            ai+=a[0];
            aj+=a[1];
            ak+=a[2];
    }

    if(ai==0 && aj==0 && ak==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}



    /*for(int i=1;i<3*n;i++)
    {
       cin >>a;
       s = s+a;
    }
    if(s==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}*/