#include <iostream>
using namespace std;
int main()
{
	int y,m,d;
	while(cin>>y>>m>>d){
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (y==2007)
	{
		for (int i=8;i<m-1;i++)
		{
			d+=days[i];
		}
		d--;

	}
	else 
	{
		if (y-2007>=1){d+=365*(y-2007);}
		for (int i=0;i<m-1;i++)
		{
			d+=days[i-1];		
		}
		d+=122;
		if (y==2008&&m>2){d++;}
		d--;
	}
	if (d%14==0||d%14==5||d%14==10)cout<<"B"<<endl;
	else if (d%14==1||d%14==6||d%14==11)cout<<"X"<<endl;
	else if (d%14==4||d%14==8||d%14==13)cout<<"P"<<endl; 
	else if (d%14==3||d%14==7||d%14==12)cout<<"H"<<endl;
	else if (d%14==2||d%14==9)cout<<"ALL"<<endl;}
	return 0;
}