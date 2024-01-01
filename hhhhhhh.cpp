#include <iostream>
#include <fstream>
#include <cstdlib>
using  namespace std;
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
    ofstream fout ("23256.cpp");
    long long n=1;
    while (n<=1000000)
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
        
        fout<<"if (n=="<<n<<"){ cout<<"<<sum<<";}"<<'\n';
        n++;
        
    }
    cout<<"over";
    fout.close();
    return 0;
}