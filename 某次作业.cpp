//实验
/*#include <iostream>
using namespace std;
int main(){
    double s;
    double z;
    double t;
    while (scanf("%lf %lf\n",&t,&s)!=EOF){
        if (t<0||t>168){cout<<"input is wrong!"<<endl;}
        else {
            if (t>40 && t<60)
            {
                z=40*s+1.5*(t-40)*s;
            }
            else if(t>60)
            {
                z=(t-60)*s*3+1.5*s*20+40*s;
            }
        }
        cout <<z<<endl;
    }
    return 0;
}*/
//guoel


//作业
/*#include <iostream> 
#include <string.h>
using namespace std;
int main(){
    char  a;
    cin >> a;
    if (a <32){cout << "This is a control character."<<endl;}
    else  if (a>='0'&&a<='9'){cout <<"This is a digit."<<endl;}
    else if (a>='A'&&a<='Z'){cout << "This is a capital letter."<<endl;}
    else if (a>='a'&&a<='z'){cout << "This is a small letter."<<endl;}
    else {cout<<"This is an other character."<<endl;}
    return 0;
}*/
//只有下面这个过了
/*
#include <iostream>
using namespace std;
int main(){
    int a;
    while (scanf("%d",&a)!=EOF){
        if (a%2==1){cout << "odd number";}
        else {cout << "even number";}
    }
    return 0;
}*/

/*
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin >> a >>c >>b;
    if (c=='+'){cout<< a<<c<<b<<"="<<a+b;}
    if (c=='-'){cout<< a<<c<<b<<"="<<a-b;}
    if (c=='/'){cout<< a<<c<<b<<"="<<a/b;}
    if (c=='*'){cout<< a<<c<<b<<"="<<a*b;}
    return 0;
}
*/
/*#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin >> a >>c >>b;
    if (c=='+'){cout<< a<<c<<b<<"="<<a+b;}
    if (c=='-'){cout<< a<<c<<b<<"="<<a-b;}
    if (c=='/'){cout<< a<<c<<b<<"="<<a/b;}
    if (c=='*'){cout<< a<<c<<b<<"="<<a*b;}
    return 0;
}*/
#include <iostream>
using namespace std;
int p[13];
int main(){
    int y,d,m;
    long long a,h,k;
    p[1]=31;p[2]=28;p[3]=30;p[4]=30;p[5]=31;p[6]=30;p[7]=31;p[8]=31;p[9]=30;p[10]=31;p[11]=30;p[12]=31;
    cin >> y>>m>>d;
    if (y%400==0)
    {
        if (m>2)
        {
            a=365.25*y;
            for (int i=1;i<=m-1;i++){
                a=a+p[i];
            }
            a+=d;
        }
        else
        {
            a=365.25*y-1;
            for (int i=1;i<=m-1;i++){
                a=a+p[i];
            }
            a+=d;
        }
    }
    else 
    {
        if (y%4==0)
        {
            if (y%100!=0)
            {
                if (m>2)
                 {
            a=365.25*y;
            for (int i=1;i<=m-1;i++){
                a=a+p[i];
                }
            a+=d;
                  }
                  else
        {
            a=365.25*y-1;
            for (int i=1;i<=m-1;i++){
                a=a+p[i];
            }
            a+=d;
        }
            }
        }
        else {
            h=y%4;
            y=y-h;
            a=y*365.25;
            a=a+(h-1)*365;
            for (int i=1;i<=m-1;i++){
                a=a+p[i];
            }
            a+=d;
        }
    }
    k=a%7;
    if (k==0){cout<<"Sunday\n";}
    else if (k==1){cout<<"Monday\n";}
    else if (k==3){cout<<"Wednesday\n";}
    else if (k==4){cout<<"Thursday\n";}
    else if (k==5){cout<<"Friday\n";}
    else if (k==2){cout<<"Tuesday\n";}
    else if (k==6){cout<<"Saturday\n";}
    return 0;
}