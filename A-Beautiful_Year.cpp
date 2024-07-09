//A. Beautiful Year
//https://codeforces.com/problemset/problem/271/A


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int year,y;       cin>>year;
    int a,b,c,d;
    for(int i=0;i<1000;i++)
    {
        year++;
        y=year;
        int j=0;
        int a[4];
        while(y)
        {
            a[j]=y%10;
            y=y/10;
            j++;
        }
        if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
        {
            cout<<year<<endl;
            break;
        }
        
    }
    return 0;
}




/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int year;
    int idea=0;
    int y[3];
    cin >> year;
    for(int i=1;i<=1000;i++)
    {
        year ++;
        int ye=year;
        for(int j=0;j<4;j++)
        {
            y[j] = ye%10;
            ye = ye/10;
        }
        sort(y,y+sizeof(y));
        cout << y << "\n";
        for(int k=0;k<4;k++)
        {
            if(y[k] != y[k+1])
            {
                idea++;
            }
        }
        if(idea>0)
        {
            cout << year;
            break;
        }
    }
    return 0;
}
*/