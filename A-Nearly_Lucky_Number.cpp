//A. Nearly Lucky Number
//https://codeforces.com/problemset/problem/110/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    string num;
    int o=0;
    cin >> num;
    int n = num.length();

    for(int i=0; i<n; i++)
    {


        if((num[i]=='4') || (num[i]=='7'))
        {
            o++;
        }
    }

    if(o==4 || o==7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
    