//A. Division?
//https://codeforces.com/problemset/problem/1669/A


#include<iostream>
using namespace std;

int main()
{
    int t;        cin>>t;
    while(t--)
    {
        int rating;    cin>>rating;
        if(rating>=1900){cout<<"Division 1"<<endl;}
        else if(rating>=1600 && rating<=1899){cout<<"Division 2"<<endl;}
        else if(rating>=1400 && rating<=1599){cout<<"Division 3"<<endl;}
        else {cout<<"Division 4"<<endl;}
    }
    return 0;
}


/*
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int rating;
        cin >> rating;
        
        int division;
        
        // Determine the division using a switch statement
        switch(rating)
        {
            case 1900 ... INT_MAX:
                division = 1;
                break;
            case 1600 ... 1899:
                division = 2;
                break;
            case 1400 ... 1599:
                division = 3;
                break;
            default:
                division = 4;
        }

        cout << "Division " << division << endl;
    }

    return 0;
}
*/