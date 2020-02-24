#include <bits/stdc++.h>

using namespace std;



int main()
{
int test;
cin>>test;
while(test--)
{
   long long a,b;
   cin>>a>>b;
   if(a==b)
   {
       cout<<0<<endl;
      // return 0;
      continue;
   }
   if(a<b && (b-a)%2==0)
   {
       cout<<2<<endl;
     continue;
   }
   if(a<b && (b-a)%2!=0)
   {
       cout<<1<<endl;
      continue;
   }
   if(b<a && (a-b)%2==0)
   {
       cout<<1<<endl;
     continue;
   }
   if(b<a && (a-b)%2!=0)
   {
       cout<<2<<endl;
      continue;
   }


}
 }

