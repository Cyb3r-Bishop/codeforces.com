
//A. Team
//https://codeforces.com/problemset/problem/231/A

#include<stdio.h>
int main()
{
    int n,a,b,c,s;
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=a+b+c;
        if(s>=2)
        {
            j++;
        }
    }
    printf("%d",j);
    return 0;
}
