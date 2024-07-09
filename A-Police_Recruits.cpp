//* status: accepted.
//A. Police Recruits
//https://codeforces.com/problemset/problem/427/A


#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int curoff=0;
    int untreated=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0) { curoff+=x; }
        else
        {
            if(curoff<1) { ++untreated; }
            else { --curoff; }
        }
    }
    cout<<untreated;
	return 0;
}

/* 
#include<iostream>
using namespace std;

int main()
{
    int n;        cin>>n;
    int carry=0;
    int untreated=0;
    int c;

    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(carry==0 && c==-1)untreated++;
        else if(carry>0 && c==-1)carry--;
        else if(carry<10 && c!=-1)
        {
            carry+=c;
            //if(carry>10)carry=10;
            if(carry>10)carry-=c;
        }
        else continue;
    }
    cout<<untreated<<endl;
    return 0;
}
*/