#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n,k;
vector<long long >sura;
vector<long long >mura;

map<long long,bool>ma;
cin>>n>>k;

long long ans=0;
for(long long i=0;i<n;i++)
{
    long long f;
    cin>>f;
    sura.push_back(f);
    mura.push_back(f);
}
sort(mura.rbegin(),mura.rend());
for(long long i=0;i<k;i++)
{
   ans+=mura[i];
   ma[mura[i]]=true;
}
long long prev;
for(long long i=0;i<n;i++)
{
   if(ma[sura[i]])
    {prev=i+1;
    break;
    }
}
long long ans1=1;
long long u=prev;
for(long long i=u;i<n;i++)
{
   if(ma[sura[i]])
    {
        long long d=(((i+1)%998244353)-(prev%998244353));
        prev=i+1;
        ans1=(((ans1%998244353)*(d%998244353))% 998244353);
    }
}
cout<<ans<<" "<<ans1<<endl;


}
