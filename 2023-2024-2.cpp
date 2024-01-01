#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct a
{
    string name;
    int d;
    int b;
    int c;
};

bool cmp(struct a e,struct a f)
{

     if (e.c>f.c){return 1;}
     else if (e.c==f.c){         
          if (e.name<f.name) {return 1;}
          else return 0;       
     }
     else return 0;
}
struct a a[50];
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i].name;
   }
   for(int i=0;i<n;i++)
   {
        cin>>a[i].d;
   }
   for (int i=0;i<n;i++)
   {
        cin>>a[i].b;
   }
   for (int i=0;i<n;i++)
   {
        a[i].c=a[i].b-a[i].d;
   }
   sort(a,a+n,cmp);
   for (int i=0;i<n;i++)
   {    
          if (a[i].c==0){}
          else {cout<<a[i].c<<" "<<a[i].name<<endl;}

   }
   for (int i=0;i<n;i++)
   {    
          if (a[i].c==0){cout<<a[i].c<<" "<<a[i].name<<endl;}
          
   }

    return 0;
}
/*
#include <iostream>
using namespace std;
struct a
{
     char id[10];
     int c1;
     int c2;
     int c3;
     int c4;
     int c5;
     double ave;
};
struct a a[1000];
int main()
{
     int n;
     cin>>n;
     double ave1=0,ave2=0,ave3=0,ave4=0,ave5=0;
     for (int i=0;i<n;i++)
     {
          cin>>a[i].id>>a[i].c1>>a[i].c2>>a[i].c3>>a[i].c4>>a[i].c5;
          a[i].ave=(a[i].c1+a[i].c2+a[i].c3+a[i].c4+a[i].c5)/5.0;
     }
     for (int i=0;i<n;i++)
     {
          ave1+=a[i].c1;
          ave2+=a[i].c2;
          ave3+=a[i].c3;
          ave4+=a[i].c4;
          ave5+=a[i].c5;
          cout<<a[i].id<<" "<<a[i].c1<<" "<<a[i].c2<<" "<<a[i].c3<<" "<<a[i].c4<<" "<<a[i].c5;
          printf (" %.1lf\n",a[i].ave);
     }
     ave1=ave1/n;
     ave2=ave2/n;
     ave3=ave3/n;
     ave4=ave4/n;
     ave5=ave5/n;
     
     
          printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",ave1,ave2,ave3,ave4,ave5);
     

     return 0;
}
*/