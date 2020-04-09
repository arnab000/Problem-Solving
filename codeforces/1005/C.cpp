#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long n;
   map<long long ,long long>ma;
   vector<long long>sura;
   cin>>n;
   long long mx=-1;
   for(long long i=0;i<n;i++)
   {
       long long k;
       cin>>k;
       ma[k]++;
       sura.push_back(k);
       mx=max(mx,k);
   }
   long long ans=0;
    for(long long i=0;i<n;i++)
   {
      long long d=1;
      while(d<=mx)
      {
          d*=2;
          if(ma[d-sura[i]] )
          {
              if(sura[i]==d-sura[i] && ma[d-sura[i]]>1){
              ans++;
              break;
              }
              else if(sura[i]!=d-sura[i]){
                ans++;
                break;
              }
          }

      }


   }
  // cout<<ans<<endl;
   cout<<n-ans<<endl;

}