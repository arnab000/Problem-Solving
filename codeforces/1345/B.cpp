#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long test;
   cin>>test;
   vector<long long>sura;
   long long j=2;
   sura.push_back(2);
   long long i=1;
   while(true)
   {
      sura.push_back(sura[i-1]+((j*2)+(j-1)));
       j++;

       if(sura[i]>=1000000000)
       break;
       i++;


   }
   while(test--)
   {
       long long n;
       long long ans=0;
       cin>>n;
       while(n>0){
       auto it=upper_bound(sura.begin(),sura.end(),n);
        if(it==sura.begin())
       {
          break;
       }
       it--;

       n-=*it;
       ans++;
       }
       cout<<ans<<endl;
   }
}

