#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long test;
   cin>>test;
   while(test--)
   {
       long long n;
       cin>>n;
       long long soja[n]={0},ulta[n]={0};
       vector<long long >sura;
       for(long long i=0;i<n;i++)
       {
           long long k;
           cin>>k;
           sura.push_back(k);

       }
       set<long long >s1,s2;
      long long mx=-1;
      long long mn=INT_MAX;
        for(long long i=0;i<n;i++)
       {
          s1.insert(sura[i]);
          mn=min(mn,sura[i]);
          mx=max(mx,sura[i]);
          if(mn==1 && mx==i+1 && s1.size()==mx)
          {
              soja[i]=1;
          }

       }
       long long mx1=-1;
       long long mn1=INT_MAX;
       long long j=0;
        for(long long i=n-1;i>0;i--)
       {
           j++;
          s2.insert(sura[i]);
          mn1=min(mn1,sura[i]);
          mx1=max(mx1,sura[i]);
          if(mn1==1 && mx1==j && s2.size()==j)
          {
              ulta[i]=1;
          }

       }
       long long u=0;
       vector<pair<long long ,long long> >haha;
       for(long long i=0;i<n;i++)
       {

           if(soja[i] && ulta[i+1])
           {
               u++;
               haha.push_back({i+1,n-(i+1)});

           }
       }
       cout<<u<<endl;
       for(long long i=0;i<haha.size();i++)
       {
           cout<<haha[i].first<<" "<<haha[i].second<<endl;
       }

   }
}
