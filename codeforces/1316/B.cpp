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
   string s,l;
   cin>>s;

   l=s;
   reverse(l.begin(),l.end());
   vector<pair<string,long long>>sura;
   sura.push_back({s,1});
     sura.push_back({l,n});
     for(long long k=2;k<n;k++)
     {
         string y;
         for(long long j=k-1;j<n;j++)
         {
             y+=s[j];
         }
         if((n-(k-1))%2==0)
         {
                for(long long j=0;j<k-1;j++)
         {
             y+=s[j];
         }

         }
         else
         {
                    for(long long j=k-2;j>=0;j--)
         {
             y+=s[j];
         }

         }
         sura.push_back({y,k});
     }
     sort(sura.begin(),sura.end());
     cout<<sura[0].first<<endl;
     cout<<sura[0].second<<endl;

}


}
