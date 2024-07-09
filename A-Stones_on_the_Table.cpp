//A. Stones on the Table
//https://codeforces.com/problemset/problem/266/A



#include<iostream>
using namespace std;

int main()
{
    int n,id=0;
    cin >>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            id++;
        }
    }
    cout << id;
    return 0;
}


/*#include<stdio.h>

int main()
{
    int n;
    int id=0;
    scanf("%d",&n);
    //cin >>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%c",&arr[i]);
        //cin >>arr[i];
    }
    
    for(int j=0; j<n; j++)
    {
        if(arr[j]==arr[j+1])
        {
            id++;
            //cout << arr[j];
            printf("%d\n",id);
        }
    }

    printf("%d",id);
    //cout << id;
    return 0;
}*/