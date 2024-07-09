//A. Theatre Square
//https://codeforces.com/problemset/problem/1/A


#include<stdio.h>
int main()
{
    long long int m,n,a;
    scanf("%lld %lld %lld", &m, &n, &a);
    if(m%a==0 && n%a==0 )
        {printf("%lld", (m/a)*(n/a));}
    else
    {
        if(m%a!=0 && n%a!=0)
           {printf("%lld", (m/a+1)*(n/a+1));}
        else
        {
            if(m%a!=0 && n%a==0)
                {printf("%lld", (m/a+1)*(n/a));}
            else
                {printf("%lld", (m/a)*(n/a+1));}
        }
    }
    return 0;
}