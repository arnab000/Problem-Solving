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
 
 vector<ll>adj[100001];
int main()
{
   ll n,m;
   cin>>n>>m;
  map<ll,ll>indegree;
   for(ll i=0;i<m;i++)
   {
       ll u,v;
       cin>>u>>v;
       adj[v].push_back(u);
       indegree[u]++;

   }
   priority_queue<ll>pq;
   for(ll i=1;i<=n;i++)
   {
       if(indegree[i]==0)
       pq.push(i);
   }
   ll ans[n+1];
   ll text=n;
   while(!pq.empty())
   {
       ll u=pq.top();
       pq.pop();
       ans[u]=text;
     
       text--;
       for(ll i =0;i<adj[u].size();i++)
       {
          indegree[adj[u][i]]--;
          if(indegree[adj[u][i]]==0)
          pq.push(adj[u][i]);
       }
    
   }
   for(ll i=1;i<=n;i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl;


  }



   
      
    
        

