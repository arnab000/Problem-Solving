#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int pow(int x,int y){
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
void prefix_function( string s,ll arr[] )
{
    
   
    long long border=0;
    arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
      {
          border=arr[border-1];
      }
      if(s[i]==s[border])
      {
          border++;
      }
      else
      {
          border=0;
      }
      arr[i]=border;
      
    }
    

}
ll dist[100005];

bool vis[100005];
vector<pair<ll,ll>>adj[100005];
void dijkstra(ll start)
{
    for(ll i=0;i<100005;i++)
    {
        dist[i]=1000000;
    }
    dist[start]=0;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push({0,start});
    while(!pq.empty())
    {
        pair<ll,ll> u=pq.top();
        pq.pop();
        vis[u.second]=true;
        if(dist[u.second]<u.first)
        continue;
        for(ll i=0;i<adj[u.second].size();i++)
        {
            pair<ll,ll> v=adj[u.second][i];
            if(vis[v.second])
            continue;
            ll new_dist=dist[u.second]+v.first;
            if(new_dist<dist[v.second])
            {
                dist[v.second]=new_dist;
              
                pq.push({new_dist,v.second});
            }

        }
    }

}



int main()
{
    Fast
ll n;
cin>>n;
ll ans=0;
for(ll i=0;i<n-1;i++)
{
    ll u,v,w;
    cin>>u>>v>>w;
    ans+=2*w;
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});
}

ll mx=-1;
dijkstra(1);
for( ll i=1;i<=n;i++)
{
    if(dist[i]>mx)
    {
       
        mx=dist[i];
    }
}
cout<<ans-mx<<endl;


}



   
      
    
        

