//A. Wallet Exchange
//https://codeforces.com/contest/1919/problem/0


#include<iostream>
using namespace std;

int main()
{
    long long int t;    cin>>t;
    while(t--)
    {
    long long int a,b;    cin>>a>>b;

    if((a+b)%2==1){    cout << "Alice" << endl;    }
    else {    cout << "Bob" << endl;    }
    
    }
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    long long int t;    cin>>t;
    while(t--)
    {
        long long int a,b;    cin>>a>>b;
        int c = 0;
        while(a!=0 && b!=0)
        {
            c++;
            if(a>b && c%2==1)
            {
                a--;
            }
            else if(a<b && c%2==1)
            {
                swap(a,b);
                a--;
            }
            else if(a==b && c%2==1)
            {
                a--;
            }

            if(b>a && c%2==0)
            {
                b--;
            }
            else if(b<a && c%2==0)
            {
                swap(a,b);
                b--;
            }
            else if(b==a && c%2==0)
            {
                b--;
            }
        }
    if(c%2==0){    cout << "Alice" << endl;    }
    else {    cout << "Bob" << endl;    }

    }
    return 0;
}
*/