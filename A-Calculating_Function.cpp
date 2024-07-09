//A. Calculating Function
//https://codeforces.com/problemset/problem/486/A



#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    cin >>n;
    if(n%2==0)
    {
        m=n/2;
        cout << m;
    }
    else
    {
        m=-(n/2+1);
        cout << m;
    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result=0;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            result = result+i;
        }
        else
        {
            result = result-i;
        }
    }
    cout <<result;
    return 0;
}*/