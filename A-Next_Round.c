
//A. Next Round
//https://codeforces.com/problemset/problem/158/A


#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
