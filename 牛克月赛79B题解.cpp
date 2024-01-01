#include <iostream>
#include <algorithm>
using namespace std;
int ji[10000005];
int ou[10000005];
int main(){
   int n,a,b=0,c=0;
   long long sum;
   cin >> n;
   while (n--){
        cin >>a;
        if (a%2==0){ou[b]=a;
        b++;}
        else {ji[c]=a;
        c++;}
   }
   sort (ji,ji+c);
   sort (ou,ou+b);
   if (c%2==0){
        for (int i=0;i<c;i++){
            sum+=ji[i];
        }
   }
   else {
        for (int i=1;i<c;i++){
            sum+=ji[i];
        }
   }
   for (int i=0;i<b;i++){
        sum+=ou[i];
   }
   cout <<sum;
    return 0;
}