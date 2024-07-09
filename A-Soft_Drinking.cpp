//A. Soft Drinking
//https://codeforces.com/problemset/problem/151/A


#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>np>>np;

    int kl = k*l;
    int cd = c*d;
    int total_toasts = 0;

    while(kl && cd && p)
    {
        total_toasts++;
        kl -= nl;
        cd -= 1;
        p -= np;
    }

    cout<<total_toasts/n<<endl;
    
    return 0;
}