#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--)
   {
       long long a,b;
       cin>>a>>b;
       long long ans=0;
       long long i=1;
       if(abs(a-b)==0)
       {
           cout<<0<<endl;
           continue;
       }
       long long sum=a+b;

      while(1)
      {
          long long k=sum+((i*(i+1))/2);
          if(k%2==0 && k/2>=a && k/2>=b)
          {
              cout<<i<<endl;
              break;
          }
          i++;
      }

   }

}
