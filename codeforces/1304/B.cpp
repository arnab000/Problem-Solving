#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,l;
    cin>>test>>l;
    map<string ,bool>ma;
    vector<string>sura;
    map<string,bool>taken;

   for(long long i=0;i<test;i++)
   {
       string k;
       cin>>k;
       ma[k]=true;
       sura.push_back(k);
   }
   string ans1,ans2,ans3;
     for(long long i=0;i<test;i++)
   {
       string k;

     for(long long j=sura[i].size()-1;j>=0;j--)
     {
      k+=sura[i][j] ;
     }
     if(ma[k] && k!=sura[i] && (!taken[k] && !taken[sura[i]])){
        ans1+=sura[i];
        ans2=k+ans2;
        taken[k]=true;
        taken[sura[i]]=true;
     }

   }
   long long f=-1;
      for(long long i=0;i<test;i++)
   {
       string k;

     for(long long j=sura[i].size()-1;j>=0;j--)
     {
      k+=sura[i][j] ;
     }
     if( k==sura[i] && f<=sura[i].size()){
        ans3=sura[i];
        f=sura[i].size();
     }

   }
   string ans=ans1+ans3+ans2;
   cout<<ans.size()<<endl;

   cout<<ans<<endl;


}
