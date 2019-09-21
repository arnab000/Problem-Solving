#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   vector<pair<int,int>>sura;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>k;
       sura.push_back({k,i+1});

   }
   sort(sura.rbegin(),sura.rend());
   int ans=1;
   for(int i=1;i<n;i++)
   {
       ans+=sura[i].first*i+1;
   }
   cout<<ans<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<sura[i].second<<" ";
   }

}
