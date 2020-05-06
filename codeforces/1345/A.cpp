#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long test;
   cin>>test;
   while(test--)
   {
       long long n,m;
       cin>>n>>m;
       if(n==1)
       {
           cout<<"YES"<<endl;
           continue;
       }
       if(m==1)
       {
           cout<<"YES"<<endl;
           continue;
       }
       if(n==2 && m==2)
       {
           cout<<"YES"<<endl;
           continue;
       }
      cout<<"NO"<<endl;
   }
}

