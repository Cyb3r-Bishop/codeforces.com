//A. I Wanna Be the Guy
//https://codeforces.com/problemset/problem/469/A


#include<iostream>
using namespace std;

int main()
{
    int n;          cin>>n;
    int test[n+1]={0};
    int p;          cin>>p;
    int pa;
    for(int i=0;i<p;i++)
    {       
        cin>>pa;
        test[pa]++;
    }

    int q;          cin>>q;
    int qa;
    for(int i=0;i<q;i++)
    {       
        cin>>qa;   
        test[qa]++; 
    }

    int  NotOk=0;
    for(int i=0;i<=n;i++)
    {
        if(test[i]==0)
        {
            NotOk++;
        }
    }
    if(NotOk>1)
    {   cout<<"Oh, my keyboard!"<<endl;     }
    else
    {   cout<<"I become the guy."<<endl;   }

    return 0;
}