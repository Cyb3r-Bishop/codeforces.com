//A. String Task
//https://codeforces.com/problemset/problem/118/A


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string ch;
    cin >>ch;
    int n = ch.length();

    for(int i=0;i<n;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]+=32;
        }
        if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u' && ch[i]!='y')
        {
            cout << "." <<ch[i];
        }
    }
    return 0;
}