#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int y;
        cin>>y;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        sort(s1,s1+y);
        sort(s2,s2+y);
        if (s1==s2){cout<<"yes"<<endl;}
        else {cout<<"no"<<endl;}
    } 
}