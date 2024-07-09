//A. Translation
//https://codeforces.com/problemset/problem/41/A


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a1,a2;
    cin >>a1>>a2;
    reverse(a1.begin(),a1.end());
    if(a1==a2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}



/*int main()
{
    string a1,a2,a3;
    int x=0;
    cin >>a1>>a2;
    int n=a1.length();
    for(int i=0;i<n;i++)
    {
        a3[i]=a1[n-1-i];
        //cout << a3[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a2[i]==a3[i])
        {
            x++;
        }
        else
        {
            break;
        }
    }

    if(x==n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}*/