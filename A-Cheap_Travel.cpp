//A. Cheap Travel
//https://codeforces.com/problemset/problem/466/A


#include<iostream>
using namespace std;

int main()
{
    int n,m,a,b;        cin>>n>>m>>a>>b;
    int taka;
    if(m*a>b)
    {
        int x = (n%m)*a;
        if(x>b){    taka = n/m*b + b;   }
        else{    taka = n/m*b + x;   } 
    }
    else{   taka = n*a;     }

    cout<<taka<<endl;
    return 0;
}



    /*int n,m,a,b;        cin>>n>>m>>a>>b;
    int taka;
    if(m>=n){   taka = b;   }
    else if(a<=b || m==1 )
    {   taka = n/m*b + n%m*a;   }
    else
    {   taka = n/m*b + n%m*b;    }
    cout<<taka<<endl;
    return 0;*/
