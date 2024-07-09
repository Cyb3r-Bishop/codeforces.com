//A. Raising Bacteria
//https://codeforces.com/problemset/problem/579/A


#include<iostream>
using namespace std;
 
 
 
int main()
{
    long long a, sum=0;
    cin>>a;
    while(a != 0)
    {
        if(a % 2 == 1)
        {   sum++;  }
        a = a / 2;
    }
    cout << sum << endl;
    return 0;
}