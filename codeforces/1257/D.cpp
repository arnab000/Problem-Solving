#include<bits/stdc++.h>
using namespace std;


int main()
{
 long long test;
 cin>>test;
 while(test--)
 {
  long long n,m;
  cin>>n;
  vector<long long>sura;
  for(long long i=0;i<n;i++)
  {
     long long k;
     cin>>k;
     sura.push_back(k);
  }
  cin>>m;
  long long mx[m+1];
   vector<pair<long long ,long long> >hero;
  vector<long long>power;
  for(long long i=0;i<m;i++)
  {
     long long l,r;
     cin>>l>>r;
    hero.push_back({l,r});
    power.push_back(l);

  }
  sort(hero.begin(),hero.end());
  sort(power.begin(),power.end());
  long long m1=-1;
  for(long long i=m-1;i>=0;i--)
  {
     m1=max(m1,hero[i].second);
     mx[i]=m1;
  }
  long long ans=0,tt=-1;
  bool hbe =true;
  long long rr=0;


  for(long long i=0;i<n;i++)
  {
     tt=max(tt,sura[i]);
     auto it=lower_bound(power.begin(),power.end(),tt);
     rr++;
     if(it==power.end())
     {
        hbe=false;
        break;
     }
     long long index=it-power.begin();
     if(mx[index]<rr)
     {
        ans++;
        rr=0;
        i--;
        tt=-1;
     }
 // cout<<ans<<endl;
  }
  ans++;
  if(hbe)
  cout<<ans<<endl;
  else
  {
     cout<<-1<<endl;
  }
  
  

 }
}

