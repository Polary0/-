/*include <iostream>
#include <string>
using namespace std;
struct a
{
    string id;
    string ban;
    string name;
    int c1;
    int c2;
    int c3;
    double ave;

}a[1000];
int main()
{
    int n;
    cin>>n;
    int p=0,max=0;
    for (int i=0;i<n;i++) 
    {
        cin>>a[i].id>>a[i].ban>>a[i].name>>a[i].c1>>a[i].c2>>a[i].c3;
        a[i].ave=(a[i].c1+a[i].c2+a[i].c3)/3.0;
        if (a[i].ave>max){p=i;max=a[i].ave;}
        cout<<a[i].name<<" ";
        printf("%.1lf\n",a[i].ave);
    }
    cout<<a[p].id<<" "<<a[p].ban<<" "<< a[p].name<<" ";
    printf("%.1lf %.1lf %.1lf %.1lf\n",a[p].c1*1.0,a[p].c2*1.0,a[p].c3*1.0,a[p].ave);
 
    return 0; 
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int h=0,m=0;
        scanf("%d:%d",&h,&m);
        m+=15;
        if (m>=60){m=m-60;h++;}
        
        h+=13;
        if (h>=24){h-=24;}
        cout<<h<<":"<<m<<endl;
    }
    return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];
int b[1000000];
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    
    return 0;
}