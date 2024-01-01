//统计字母
/*#include <iostream>
int a[1000];
using namespace std;
int main(){
    int n,max=0,p,t;
    cin>>n;
    for (int i=0;i<n;i++){
        scanf("%c",&p);
        a[p]++;
    }a99=0;
    for (int i= 97;i<=122;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        t=i;
        }
    }
    printf("%c\n",t);
    return 0;
}*/
//密码翻译
/*#include <iostream>
#include <string.h>
using namespace std;
char a[10000000];
int main()
{   int n=0,m=0;
    string a;
    while (getline(cin,a)){
    m=a.size();
    for (int n=0;n<m;n++){
    if (a[n]>='a'&&a[n]<='y'){a[n]++;}
    else if (a[n]=='z'){a[n]='a';}
    else if (a[n]=='Z'){a[n]='A';}
    else if (a[n]>='A'&&a[n]<='Y'){a[n]++;}
    }
   cout<<a<<endl;}
    return 0;
}*/
//字符串的倒序输出
/*#include <iostream>
#include <string.h>
using namespace std;
void f(string a)
{
    int n=a.size();
    for (int i=0;i<n;i++){
        cout<<a[n-i-1];
    }    

}
int main(){
    string a;
    while (getline(cin,a)){
        
    f(a); 
    cout<<endl;   
    }
    
    return 0;
}*/
//大小写转换
/*#include <iostream>
using namespace std;
void f(char a){
    if (a>='A'&&a<='Z'){printf("%c",a+32);}
    else if (a>='a'&&a<='z'){printf("%c",a-32);}
}
int main(){
    char a;
    while (scanf("%c",&a)!=EOF){
       f(a);
    }
    cout<<endl;
    return 0;
}*/
/*#include <iostream>
#include <string.h> 
using namespace std;
char a[100000];
char b[100000];
char c[100000];
int main(){
    string s;
    while (getline(cin,s))
    {
        int n=s.size();
        int d=0,e=0,f=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]>='a'&&s[i]<='z')
            {
                a[d]=s[i];
                d++;
            }
            else if (s[i]>='A'&&s[i]<='Z')
            {
                a[d]=s[i];
                d++;
            }else if (s[i]>='0'&&s[i]<='9')
            {
                b[e]=s[i];
                e++;
            }
            else 
            {
                c[f]=s[i];
                f++;
            }
        }
        for (int i=0;i<d;i++){cout<<a[i];}
        cout<<endl;
        for (int i=0;i<e;i++){cout<<b[i];}
        cout<<endl;
        for (int i=0;i<f;i++){cout<<c[i];}
        cout<<endl;
    }
    return 0;
}
*/
/*#include <iostream>
using namespace std;
long long a[10101001];
void p(int n)
{
    int i,j,k,te;
    for (i=0;i<n-1;i++)
    {
        k=i;
        for (j=i+1;j<n;j++)
        {
            if(a[j]>a[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            te=a[k];
            a[k]=a[i];
            a[i]=te;
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i];
        
        
        if((i+1)%10==0||i==n-1){cout<<endl;}
        else if ((i+1)%10!=0){cout<<" ";}
    }
    
}
int cha(int n,int m)
{
    
    for (int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            return i+1;
            
        }   
    }
    return -1;
}

int main()
{
    int n,m;
     
   cin>>n;  
    for (int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    p(n);
    scanf("%d\n",&m);
    if (cha(n,m)==-1){cout<<"no this score!"<<endl;}
    else {cout<<cha(n,m)<<endl;}
    n=0;
    m=0;

    return 0;
}*/
//
/*#include <bits/stdc++.h>
using namespace std;

int cheng(int a[3][3] , int b[3][3] , int x , int y ,int sum = 0){
    for(int i =0;i<3;i++) sum+= a[x][i]*b[i][y];
    return sum;
}
int main(void){ 
    int a[3][3],b[3][3];
    for(int i = 0; i<3;i++) for(int j = 0; j<3;j++) cin >> a[i][j];
    for(int i = 0; i<3;i++) for(int j = 0; j<3;j++) cin >> b[i][j];

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++) cout << cheng(a,b,i,j) << " ";
        cout << endl;
     }

}*/
/*
#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> m{{"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},{"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9}};
int main(){
	string a,b,c,d,e,f,p,o;
	int ab=1;
	while (ab){
		int d1=0,d2=0;
	while (cin>>b)
	{	
		if (d1==0)a=b;
		if (d1==1)e=b;
		if (b=="zero") p="zero"; 
		if (b=="+") break;
        d1++;
	}
	while (cin>>d)
	{
		if (d2==0)c=d;
	    if (d2==1)f=d;
		if (d=="zero") o="zero";
		if (d=="=") break;
        d2++;
	}
	if (p=="zero"&&o=="zero"){ab=0;break;}
	else if (d1==1&&d2==1) cout<<m[a]+m[c]<<endl;
	else if (d1==1&&d2==2) cout<<m[a]+m[c]*10+m[f]<<endl;
	else if (d1==2&&d2==1) cout<<m[a]*10+m[e]+m[c]<<endl;
	else if (d1==2&&d2==2) cout<<m[a]*10+m[e]+m[c]*10+m[f]<<endl;
	p=" ";
	o=" ";
	}
	return 0;
}

*/

#include <iostream>
using namespace std;
int main(){
    int i=10110;
    for (int i = 1; i<=500; i++){}
    cout<<i;
}

