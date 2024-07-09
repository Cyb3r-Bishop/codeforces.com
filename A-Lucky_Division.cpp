//A. Lucky Division
//https://codeforces.com/problemset/problem/122/A


#include<iostream>
using namespace std;

int luckyNumber(int x)
{
    int flag=0,r;
    while(x)
    {
        r=x%10;
        if(!(r==4 || r==7)) {flag=1; break;}
        x/=10;
    }
    if(flag) return 0;
    else return 1;
}
int main()
{
    int n;
    cin>>n;
    if(luckyNumber(n)) cout<<"YES";
    else
    {
        int flag = 1;
        for (int i = 1; i <= n/2; i++)
        {
            if(luckyNumber(i) && n%i == 0)
            {
                flag = 0;
                cout<<"YES";
                break;
            }
        }
        if(flag) cout<<"NO";
    }
    return 0;
}



/* 
#include<iostream>
using namespace std;

int main()
{
    int n,r=0,c=0,a=0;
    cin >>n;
    if(n%4==0 || n%7==0)
    {
        cout <<"YES\n";
    }
    else
    {
        while (n)
        {
            r=n%10;
            n=n/10;
            a++;
            if(r==4 || r==7)
            {
                c++;
            }
        }
        if(c==a)
        {
            cout <<"YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
    }
    return 0;
}
*/