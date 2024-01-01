//组合数
/*#include <iostream>
#include <cmath>
using namespace std;
int c(int n,int r)
{
    if (r==1){return n;}
    
    else {return c(n, r-1)*(n - r + 1)/r;} 
}
int main()
{
    int n,r;
    while (scanf("%d %d\n",&n,&r)!=EOF){
   
    if (n==0&&r==0){}
    else if (n<r){cout<< "error!"<<endl;}
    else if (n!=0&&r==0){cout<< "1"<<endl;}
    else if (n==1&&r==1){cout<<"1"<<endl;}
    else {cout<<c(n,r)<<endl;}}

3 2
5 1
6 1


    return 0;
}
*/
//阶乘
/*
#include <iostream>
using namespace std;
int f(int n){
   
    if (n==1){return 1;}
    else if (n==2){return 2;}
    else if (n==3){return 6;}
    else if (n==4){return 24;}
    else return f(n-1)*n;
}
int main()
{
    int n;
    cin >> n;
    long long a;
    a=f(n);
    cout<< a<<endl;
    return 0;
}
*/
//平方和
/*
#include <iostream>
using namespace std;
int f(int n){
   
    if (n==1){return 1;}
    else if (n==2){return 5;}
    else if (n==3){return 14;}
    else return f(n-1)+n*n;
}
int main()
{
    int n;
    cin >> n;
    long long a;
    a=f(n);
    cout<< a<<endl;
    return 0;
}
*/
//蠕虫123456
/*#include <stdio.h>
#include <iostream>
using namespace std;
int check(int h,int u,int d);
int main(void){
    int h,u,d;
    while(scanf("%d %d %d",&h,&u,&d) != EOF){
        if(h==0 && u == 0 && d == 0) break;
        cout << check(h,u,d) << '\n';
    }
    
    }
int check(int h,int u,int d){
    int time=0;
    int dh = h;
    while(dh>0){
        dh -= u;
        time ++;
        if(dh <= 0) break;
        else{
            dh += d;
            time++;
        }
    }
    return time;
}*/
//素数
/*#include <iostream>
using namespace std;
int a[10000000];

int main()
{
    int l,r,m=0;
    cin >> l >> r;
    a[0]=1;a[1]=1;
    for (int i=2;i<=1000;i++)
    {
        a[2*i]=1;
        a[3*i]=1;
        a[5*i]=1;
        a[7*i]=1;
        a[13*i]=1;
        a[17*i]=1;
        a[19*i]=1;
        a[23*i]=1;
        a[29*i]=1;
        a[31*i]=1;
        a[11*i]=1;
        a[37*i]=1;
        a[41*i]=1;
        a[43*i]=1;
        a[47*i]=1;

    }
    for (int i=l;i<=r;i++)
    {
        if (a[i]==0)
        {
			cout<<i<<' ';
            m++;
        if (m%5==0){cout<<'\n';}
           
            
        }
    }
    
    return 0;
}*/
//借书
#include <iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin >>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            for (int p=1;p<=n;p++)
            {
                if (i==j||i==p||j==p){continue;}
                else {printf("A:%d B:%d C:%d\n",i,j,p);
                m++;}
            }
        }
    }
    cout<<m;
} 