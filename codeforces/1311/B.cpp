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
   vector<long long >sura;
   vector<pair<long long ,bool>>ma[101];
   map<long long , bool>ka;
   vector<long long>haha;
    vector<long long >mura;

   for(long long i=0;i<a;i++)
   {
       long long k;
       cin>>k;
       sura.push_back(k);
       mura.push_back(k);
       ma[k].push_back({i+1,false});
   }
    for(long long i=0;i<b;i++)
   {
       long long k;
       cin>>k;
       haha.push_back(k);
    ka[k]=true;

   }
   sort(mura.begin(),mura.end());
   bool ans=true;
for(long long i=0;i<a;i++)
   {

      if(sura[i]!=mura[i])
      {
          long long b=mura[i];
          long long y=0;
          for(long long h=0;h<ma[mura[i]].size();h++)
          {

              if(ma[b][h].first>i+1 &&ma[b][h].second==false)
              {
                  bool hbe= true;

                  for( long long j=i+1;j<ma[b][h].first;j++)
                  {
                      if(!ka[j])
                      {
                          hbe=false;
                          break;
                      }
                  }
                  if(hbe==false)
                    y++;
                    if(hbe==true)
                    {
                      ma[b][h].second==true;
                      break;
                    }
              }
            if(ma[b][h].first<i+1 &&ma[b][h].second==false)
              {
                  bool hbe= true;

                  for( long long j=ma[b][h].first;j<i+1;j++)
                  {
                      if(!ka[j])
                      {
                          hbe=false;
                          break;
                      }
                  }
                  if(hbe==false)
                    y++;
                    if(hbe==true)
                    {
                      ma[b][h].second==true;
                      break;
                    }
              }
          }
          if(y==ma[mura[i]].size())
            ans=false;
      }
   }
   if(ans)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;




}
 }

