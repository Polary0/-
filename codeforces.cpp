#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int f(int n)
{
    if (n>=0){return n;}
    else return fabs(n);
}
int d[4];
int main()
{
    int t;
    cin>>t;
    string s="1234567890";
    while (t--)
    {
        string a;
        cin>>a;
        long long sum=0;
        for (int i=0;i<4;i++)
        {
            d[i]=s.find(a[i])+1;
        }
        for (int i=0;i<4;i++)
        {
            sum+=f(d[i]-d[i-1])+1;
        }
        cout<<sum-1<<endl;
        
    }
    return 0;
}