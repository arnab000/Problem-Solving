#include<bits/stdc++.h>
using namespace std;
#define m 200005
vector<long long>adj[m];
long long s[m],level[m];
bool vis[m];
int dfs(long long n)
{
vis[n]=true;

s[n]=1;

for(long long i=0;i<adj[n].size();i++)
{
long long v=adj[n][i];
if(!vis[v])
{
vis[v]=true;
level[v]=level[n]+1;

dfs(v);
s[n]+=s[v];

}

}

}
int main()
{
vector<long long>ans;
long long n,k;
cin>>n>>k;
for(long long i=0;i<n-1;i++)
{
long long u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
dfs(1);

for(long long i=1;i<=n;i++)
{
ans.push_back(level[i]-(s[i]-1));

}
long long sura=0;
sort(ans.rbegin(),ans.rend());
for(long long i=0;i<k;i++)
{
sura+=ans[i];
}
cout<<sura<<endl;


}

