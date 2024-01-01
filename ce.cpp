#include <iostream>
#include <cstring>
#include <cmath>
int a[100000000]={0};
bool che(std::string s);
int fenl(std::string s);
int fenr(std::string s);
void out(std::string s);
int fen1(std::string s);
int fen2(std::string s);
int main()
{
    int n,q,y;
	std::string s;
    getline (std::cin,s);
	for (int i=0;i<s.size();i++)
	{
		if (s[i]==' ') y=i;
	}
	n=fen1(s);
	q=fen2(s);
	while (q--)
    {
        getline(std::cin,s);
        out(s);
    }
	for (int i=0;i<100;i++){std::cout<<a[i]<<" ";}
	
}
bool che(std::string s)
{
    int l=s.size();
    for (int i=0;i<l;i++)
    {
        if (s[i]=='='&&s[i+1]=='=') return 1;
    }
    return 0;
}
//检查是赋值（0）语句还是判断（1）
int fenl(std::string s)
{
    int l=0;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]=='=') {break;l-=1;}
        l++;
    }
    int p=0;
    for (int i=0;i<l;i++)
    {
        p+=(s[i]-'0')*pow(10,l-i-1);
    }
    return p;
}
int fenr(std::string s)
{
    int l=0,t;
    for(int i=0;i<s.size();i++)
    {
        l++;
        if(s[i]=='=') {t=i+2;}
    }
    int p=0,o=0;
    for (int i=t;i<s.size();i++)
    {
		o++;
        p+=(s[i]-'0')*pow(10,l-t-o);
    }
    return p;
}
void out(std::string s)
{
	if (che(s))
	{	
		if (a[fenl(s)]==a[fenr(s)])std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
    else 
	{
		a[fenl(s)]= fenr(s);
	}
}
int fen1(std::string s)
{
	int l=0;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==' ') {break;l-=1;}
        l++;
    }
    int p=0;
    for (int i=0;i<l;i++)
    {
        p+=(s[i]-'0')*pow(10,l-i-1);
    }
    return p;
}
int fen2(std::string s)
{
	int l=0,t;
    for(int i=0;i<s.size();i++)
    {
        l++;
        if(s[i]==' ') {t=i+1;}
    }
    int p=0,o=0;
    for (int i=t;i<s.size();i++)
    {
		o++;
        p+=(s[i]-'0')*pow(10,l-t-o);
    }
    return p;
}