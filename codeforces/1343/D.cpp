#include<bits/stdc++.h>
using namespace std;

long long  fin[2000000];

void add(long long p,long long k,long long n)
{
for(int i=p;i<=n;i+=(i&-i))
{
fin[i]+=k;
}

}
long long sum(long long  p)
{
long long ans=0;
for(int i=p;i;i-=(i&-i))
{
ans+=fin[i];
}
return ans;
}
int main()
{
 long long test;
 cin>>test;
 while(test--)
 {

     long long n,d;
     cin>>n>>d;
     for(long long i=0;i<=d*2;i++)
     {
         fin[i]=0;

     }
     vector<long long>sura;
     for(long long i=0;i<n;i++)
     {
     long long k;
     cin>>k;
     sura.push_back(k);
     }
     long long mn=1000000000;
     long long mx=-1;
      for(long long i=0;i<n/2;i++)
     {
     long long l,r;
        mn=min(sura[i],sura[n-i-1]);
        mx=max(sura[i],sura[n-i-1]);
        l=1+mn;
        r=mx+d;
        add(2,2,2*d);
        add(l,-1,2*d);
        add(r+1,1,2*d);
        add(mn+mx,-1,2*d);
        add(mn+mx+1,1,2*d);


     }
     long long ans=1000000000;
     for(long long i=2;i<=2*d;i++)
     {
     //cout<<sum(i)<<endl;
     ans=min(ans,sum(i));

     }
     cout<<ans<<endl;





 }





}

