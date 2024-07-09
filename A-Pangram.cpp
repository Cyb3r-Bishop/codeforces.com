//A. Pangram
//https://codeforces.com/problemset/problem/520/A


#include<iostream>
using namespace std;

int main()
{
    int n;          cin>>n;
    string s;      cin>>s;
    int a[26]={0};
    int idea=0;
    if(n<26){cout<<"NO"<<endl;}
    else
    {
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                a[(int)s[i]-65]++;
                //cout<<(int)s[i]-65;
            }
            else
            {
                a[(int)s[i]-97]++;
                //cout<<s[i]-97;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]==0)
            {
                cout<<"NO"<<endl;
                idea=1;
                break;
            }
        }
        if(idea==0){   cout<<"YES"<<endl;  }
    }
    
    return 0;
}


