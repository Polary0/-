#include<iostream>
#include <cstring>
using namespace std;

struct stu{
	int id;
	string cl;
	string name;
	double score[3];
}stu[1001];
int main()
{
	int max,p;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stu[i].id>>stu[i].cl>>stu[i].name>>stu[i].score[1]>>stu[i].score[2]>>stu[i].score[3];
	}
	double ave[4];
	for(int i=1;i<=n;i++){
		ave[i]=(stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/3;
		cout<<stu[i].name<<" ";
		printf("%.1lf\n",ave[i]);
	}
	for(int j=1;j<=n;j++){
		if(ave[j]>max) max=ave[j];
		p=j;
	}
	cout<<stu[p].id<<" "<<stu[p].cl<<" "<<stu[p].name<<" "<<max<<endl;
	double n1,n2,n3;
	for(int i=1;i<=n;i++){
		n1=n1+stu[i].score[1];
		n2=n1+stu[i].score[2];
		n3=n1+stu[i].score[3];
	}
	printf("%.1lf %.1lf %.1lf\n",n1/n,n2/n,n3/n);
	return 0;
}