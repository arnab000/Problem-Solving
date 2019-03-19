
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m,i,d=0;
   cin>>n>>m;
   if(m%n!=0)
   {
       cout<<"-1"<<endl;
       return 0;
   }

   i=m/n;
   while(i!=1)
   {
       if(i%2==0)
       {
           i=i/2;
           d++;
       }
       else if(i%3==0)
       {
           i=i/3;
           d++;
       }
       else if(i%2!=0 && i%3!=0)
       {
           cout<<"-1"<<endl;
       return 0;
       }
   }
   cout<<d<<endl;





}
