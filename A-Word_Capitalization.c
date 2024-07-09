
//A. Word Capitalization
//https://codeforces.com/problemset/problem/281/A


#include<stdio.h>
int main()
{
    char name[1001];
    gets(name);
    if(name[0]>='a' && name[0]<='z')
    {
        name[0]-=32;
    }
    puts(name);
    return 0;
}
