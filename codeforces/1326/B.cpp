#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long test;
 long long n;
 cin>>n;
 vector<long long >sura;
 for(long long i=0;i<n;i++)
 {
     long long k;
     cin>>k;
     sura.push_back(k);
 }
 long long ans=sura[0];
 long long mx=sura[0];
 cout<<sura[0]<<" ";
  for(long long i=1;i<n;i++)
 {

   ans=sura[i]+mx;
   mx=max(mx,ans);
   cout<<ans<<" ";

 }
 cout<<endl;


}
