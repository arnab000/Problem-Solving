#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
struct Compare {
    constexpr bool operator()(pi const & a,
                              pi const & b) const noexcept
    { return a.first < b.first || (a.first == b.first && a.second.first > b.second.first); }
 
};

ll dist1[100005],dist2[100005],dist3[100005],dist4[100005];
vector<ll>adj[100005];
ll odd[100005];
ll n,m,k;
ll bfs(ll x)
{  bool vis[100005];
memset(vis,0,100005);
memset(dist1,0,100005);
    vis[x]=true;
    dist1[x]=0;
    queue<ll>pq;
    pq.push(x);
    while(!pq.empty())
    {
        ll u=pq.front();
        pq.pop();
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i];
           if(!vis[v])
           {
                dist1[v]=dist1[u]+1;
                vis[v]=true;
                pq.push(v);
           }
        }
    }
    ll kuku=-1;
    ll puku;
for(ll i=1;i<=n;i++)
{
    if(odd[i] && dist1[i]>kuku)
    {
        kuku=dist1[i];
        puku=i;
    }
}
return puku;



}
ll bfs1(ll x,ll y)
{
     bool vis1[100005];
     bool vis2[100005];
     memset(vis1,0,100005);
     memset(vis2,0,100005);
      vis1[x]=true;
    dist2[x]=0;
    queue<ll>pq1;
    pq1.push(x);
    while(!pq1.empty())
    {
        ll u=pq1.front();
        pq1.pop();
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i];
           if(!vis1[v])
           {
                dist2[v]=dist2[u]+1;
                vis1[v]=true;
                pq1.push(v);
           }
        }
    }
     vis2[y]=true;
    dist3[y]=0;
    queue<ll>pq2;
    pq2.push(y);
    while(!pq2.empty())
    {
        ll u=pq2.front();
        pq2.pop();
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i];
           if(!vis2[v])
           {
                dist3[v]=dist3[u]+1;
                vis2[v]=true;
                pq2.push(v);
           }
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(dist2[i]<=k && dist3[i]<=k )
        {
            ans++;
        }
    }
    return ans;
    
}

int main()
{
    
cin>>n>>m>>k;
for(ll i=0;i<m;i++)
{
    ll p;
    cin>>p;
    odd[p]=1;
}
for(ll i=0;i<n-1;i++)
{
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
ll x=bfs(1);
ll y=bfs(x);
cout<<bfs1(x,y)<<endl;
    
 
}
 
 
 
   
      