#include<bits/stdc++.h>
      // for vector

using namespace std;

int main ()
{
    long long n,m,a,b,k,i,l,ans=-1;
    vector<long long>sura;
    vector<long long>sura2;



 cin>>n>>m>>a>>b>>k;

 for(i=0;i<n;i++)
 {
     cin>>l;
     sura.push_back(l);
 }
  for(i=0;i<m;i++)
 {
     cin>>l;
     sura2.push_back(l);
 }
  if(k>=n || k>=m)
 {
     cout<<-1<<endl;
     return 0;
 }
 for(i=0;i<=k;i++)
 {
     long long lower=lower_bound(sura2.begin(),sura2.end(),sura[i]+a)-sura2.begin();
    if(lower==m)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(lower+(k-i)<m)
     ans=max(ans,sura2[lower+(k-i)]+b);
     else
        {
            cout<<-1<<endl;
            return 0;
        }


 }
 ans=max(ans,sura2[k]+b);;
 cout<<ans<<endl;
}
