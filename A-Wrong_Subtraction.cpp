//A. Wrong Subtraction
//https://codeforces.com/problemset/problem/977/A


#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    //for(int i=1;i<=k;i++)
    while (k)
    {
        if(n%10>0)
        {
            n=n-1;
                                //cout << n <<","<< k <<"\n";
                                k--;
                                continue;
        }
        if(n%10==0)
        {
            n=n/10;
                                //cout << n <<","<< k <<"\n";
                                k--;
                                continue;
        }
        //k--;
    }
    cout <<n; 
    return 0;
}