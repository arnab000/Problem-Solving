#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;



    while(test--) {
   long long n,a,b,c,d;
   cin>>n>>a>>b>>c>>d;
   long long from=c-d;
   long long to=c+d;
   long long f=(a-b)*n;
   long long t=(a+b)*n;
   bool hbe=true;



  if(f>to ||t< from)
  hbe=false;
   if(hbe)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;








    }

}
