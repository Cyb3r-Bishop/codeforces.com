
//A. Way Too Long Words
//https://codeforces.com/problemset/problem/71/A


#include<stdio.h>
#include<string.h>
int main()
{
    int x,n;
    scanf("%d",&n);
    char w[n][150];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&w[i]);
        x=strlen(w[i]);

        if(x>10)
        {
            printf("%c%d%c\n",w[i][0],x-2,w[i][x-1]);
        }
        else
        {
            printf("%s\n",w[i]);
        }
    }


    return 0;
}
