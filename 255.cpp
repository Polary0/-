#include <iostream>
using namespace std;
int fun(int b[],int m,int n)
{
	int i,s=0;
	for(i=0;i<m;i+=2)
	{
		s+=b[i];
	}
	return s;
}

int main(){
	int x,a[]={1,2,3,4,5,6,7,8,9};
	x=fun(a,3,7);
	cout<<x;
}