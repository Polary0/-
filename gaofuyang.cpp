
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long x,y;
	cin>>x>>y;
    long long t;
    if(x>=y){}
    else {t=x;x=y;y=t;}
    long long sum1=1,sum2=1;
    for (int i=x,t=1;t<=y;i--,t++)
    {
        sum1*=i;    
    }
    for (int i=y;i>=1;i--)
    {
        sum2*=i;
    }
    cout<<sum1/sum2;
}