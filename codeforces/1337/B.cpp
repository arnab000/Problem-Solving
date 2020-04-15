#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long test;
   cin>>test;
   while(test--)
   {
     long long p,q,r;
     cin>>p>>q>>r;
     long long d=r*10;
     bool hbe=false;
     if(p<=d)
     {
          cout<<"YES"<<endl;
          continue;
     }
     for(long long i=0;i<q;i++)
     {
         p=p/2;
         p+=10;
         if(p<=d)
         {
             hbe=true;
         }
     }
     if(hbe)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

   }


}
