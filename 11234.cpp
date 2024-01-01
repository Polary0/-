#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int s[7];
    int t;
	string a;
    getline(cin,a);
    int n=a.size();
    for (int i=1;i<=n;i++)
    {
        if(a[i]=='h'){s[1]=i;break;}
    }
    for (int i=s[1];i<=n;i++)
    {
        if(a[i]=='c'){s[2]=i;break;}
    }
    for (int i=s[2];i<=n;i++)
    {
        if(a[i]=='l'){s[3]=i;break;}
    }
    for (int i=s[3];i<=n;i++)
    {
        if(a[i]=='t'){s[4]=i;break;}
    }
    for (int i=s[4];i<=n;i++)
    {
        if(a[i]=='c'){s[5]=i;break;}
    }
    for (int i=s[5];i<=n;i++)
    {
        if(a[i]=='l'){s[6]=i;break;}
    }
    for (int i=0;i<n;i++)
    {
        if (s[i]==0)t++;
    }
    if (t>1){cout<<"I do not know what r u talking about!";}
    else cout<<"I am glad to hear that.";
    
}