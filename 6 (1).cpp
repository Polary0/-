#include <iostream>
using namespace std;
long long p(long long n)
{
    while (n%2!=1)
    {   
       if (n!=1) n=n/2;
       else return 1;

    }
    return n;
}
int main()
{
    long long n;
    while (cin>>n)
    {
        long long sum=0,num=0;
        
        if (n%2==1)
        {
            num=(n-1)/2+1;
            sum=num*(num-1)+num;
            for (int i=2;i<n;i+=2)
            {
                sum+=p(i);
            }
        }
        else 
        {
            num=(n-2)/2+1;
            sum=num*(num-1)+num;
            for (int i=2;i<n;i+=2)
            {
                sum+=p(i);
            }
        }
        
       cout<<sum<<endl;
      
    }
}