#include <iostream>
using  namespace std;
long long p(long long n)
{
    while (n%2!=1&&n!=0)
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
        long long sum=0;
        for (long long i=1;i<=n;i++)
        {
            if (i%2==1)
            {
                sum+=i;
            }
            else 
            {
                sum+=p(i);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}