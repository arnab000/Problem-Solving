#include <bits/stdc++.h>

using namespace std;



int main()
{
int test;
cin>>test;
while(test--)
{
 long long a,b,c;
 cin>>a>>b>>c;
 long long mn=INT_MAX,x,y,z;
 for(long long i=1;i<=30000;i++)
 {
     for(long long j=1;i*j<=30000;j++)
     {
         for(long long k=1;i*j*k<=30000;k++)
         {
             long long cost=abs(a-i)+abs(b-i*j)+abs(c-i*j*k);
            if(cost<mn)
            {
               mn=cost;
               x=i;
               y=i*j;
               z=i*j*k;
            }
         }
     }

 }
 cout<<mn<<endl;
 cout<<x<<" "<<y<<" "<<z<<endl;


}
 }

