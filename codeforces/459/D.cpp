#include<bits/stdc++.h>
using namespace std;
#define mx 2000000
int fin[mx];

void add(int p)
{
for(int i=p;i<=mx;i+=(i&-i))
{
fin[i]+=1;
}

}
int sum(int p)
{
int ans=0;
for(int i=p;i;i-=(i&-i))
{
ans+=fin[i];
}
return ans;
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
map<int,int >ma;
map<int,int >ma1;
vector<int>sura;
int ans1[n+1],ans2[n+1];
for(int i=0;i<n;i++)
{
int k;
cin>>k;
sura.push_back(k);
ma[k]++;
ans1[i]=ma[k];
}
for(int i=n-1;i>=0;i--)
{

ma1[sura[i]]++;
ans2[i]=ma1[sura[i]];
}
long long ans=0;
for(int i=n-1;i>=0;i--)
{
ans+=sum(ans1[i]);
add(ans2[i]+1);

}
cout<<ans<<endl;




}
