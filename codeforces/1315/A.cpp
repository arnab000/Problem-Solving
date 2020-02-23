#include <bits/stdc++.h>

using namespace std;



int main()
{
 long long test ;
 cin>>test;
 while(test--)
 {
     long long x,y,x1,y1;
     cin>>x>>y>>x1>>y1;
long long k=0;
     long long a=max(k,x1*y);
     long long b=max(k,y1*x);
   long long c=max(k,x*(y-y1-1));
     long long d=max(k,(x-x1-1)*y);
     cout<<max(max(a,b),max(c,d))<<endl;
 }
}
