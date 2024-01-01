#include <iostream>
#include <algorithm>
using namespace std;
struct st
{
    int a;
    int b;
    char c;
}s[1000];
bool cmp(struct st w,struct st e)
{
    if (w.b>e.b){return 1;}
    else if (w.b==e.b)
    {
        if (w.a>e.a)return 1;
    }
    return 1;
};
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>s[i].a>>s[i].b>>s[i].c;
    }
    sort (s,s+n,cmp);
    for (int i=0;i<n;i++)
    {
        cout<<s[i].a<<s[i].b<<s[i].c;
    }
}



/*

	                   _ooOoo_
	                  o8888888o
	                  88" . "88
	                  (| -_- |)
	                  O\  =  /O
	               ____/`---'\____
	             .'  \\|     |//  `.
	            /  \\|||  :  |||//  \
	           /  _||||| -:- |||||-  \
	           |   | \\\  -  /// |   |
	           | \_|  ''\-/''  |   |
	           \  .-\__  `-`  ___/-. /
	         ___`. .'  /-.-\  `. . __
	      ."" '<  `.___\_<|>_/___.'  >'"".
	     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
	     \  \ `-.   \_ __\ /__ _/   .-` /  /
	======`-.____`-.___\_____/___.-`____.-'======
	                   `=-='

*/


/*
char a[10000000];
void f()
{
	
}

int main(){
	int i=0;
	while (scanf("%c",&a[i]))
	{
		i++;
	}
	for (int j=i-1;j>=0;j--){
		printf("%c",a[j]);
	}
}





*/