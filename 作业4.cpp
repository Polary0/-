#include <iostream>
using namespace std;
int a[100000000];
int main()
{
    int n;
    char p;
    cin >> n;
    int x;
    for (int i=0;i<n;i++)
    {
        cin >> p;
        a[p]++;
    }
    for (int i=97;i<=122;i++)
    {
         if(a[i+1]>a[i]){
            x=i+1;
         }

    }
        printf("%c",x);
    return 0;
} 