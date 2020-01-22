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
     vector<pair<long long,long long> >sura;
     for(long long i=0;i<n;i++)
     {
         long long x,y;
         cin>>x>>y;
         sura.push_back({y,x});

     }
     sort(sura.begin(),sura.end());
     string ans;

          for(int j=0;j<sura[0].second;j++)
     {
         ans+='R';
     }
      for(int j=0;j<sura[0].first;j++)
     {
         ans+='U';
     }
     bool hbe=true;
     for(long long i=1;i<n;i++)
     {
         if(sura[i].second>=sura[i-1].second)
         {

          for(int j=0;j<sura[i].second-sura[i-1].second;j++)
     {
         ans+='R';
     }
             for(int j=0;j<sura[i].first-sura[i-1].first;j++)
     {
         ans+='U';
     }
         }
         else
         {
             hbe=false;
             break;
         }
     }
     if(hbe==true)
     {
         cout<<"YES"<<endl;
         cout<<ans<<endl;
     }
     else
        cout<<"NO"<<endl;
    }
}
