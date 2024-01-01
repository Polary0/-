/*#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    long long  n;
    cin >>n;
    cout<<(n-1)%998244353;
    

    return 0;
}
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int a[10000000];
int main(){
    int n,m,k,d;
    cin >>n,m,k;
    for (int i=0;i<10000;i++)
    {
        cin >> d;
        a[d]++;
    }
    for (int i=0;i<10000;i++)
    {
        cin >> d;
        a[d]++;
    }
    

    return 0;
}