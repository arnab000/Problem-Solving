#include<bits/stdc++.h>
using namespace std;
#define mx 2000000
long long fin[mx];

void add(long long p)
{
for(long long i=p;i<=mx;i+=(i&-i))
{
fin[i]+=1;
}

}
int sum(long long p)
{
long long ans=0;
for(long long i=p;i;i-=(i&-i))
{
ans+=fin[i];
}
return ans;
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long n;
cin>>n;
map<long long,long long >ma;
map<long long,long long >ma1;
vector<long long>sura;
long long ans1[n+1],ans2[n+1];
for(long long i=0;i<n;i++)
{
long long k;
cin>>k;
sura.push_back(k);
ma[k]++;
ans1[i]=ma[k];
}
for(long long i=n-1;i>=0;i--)
{

ma1[sura[i]]++;
ans2[i]=ma1[sura[i]];
}
long long ans=0;
for(long long i=n-1;i>=0;i--)
{
ans+=sum(ans1[i]);
add(ans2[i]+1);

}
cout<<ans<<endl;




}
