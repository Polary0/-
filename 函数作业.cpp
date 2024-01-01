#include <iostream>
#include <cmath>
using namespace std;
int c(int n,int r)
{
    if (r=1){return c(n,r);}
    
    else return c(n, r-1) * (n - r + 1) / r; 
}
int main(){
    int n,r;
    cin >>n>>r;
    if (n==0&&r==0){}
    else if (n<r){cout<< "error";}
    else if (n!=0&&r==0){cout<< "1";}
    else if (n==1&&r==1){cout<<"1";}
    else {cout<<c(n,r);}
    return 0;
}
