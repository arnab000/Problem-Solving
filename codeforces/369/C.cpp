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





vector<ll>adj[100005];
ll broken_child[100005];
ll broken_path[100005];
bool vis[100005];

void dfs(ll x)
{
    vis[x]=true;

    if(broken_child[x])
    broken_path[x]+=1;
    for(ll i=0;i<adj[x].size();i++)
    {
       ll v=adj[x][i];
        if(!vis[v])
        {
           dfs(v);
            broken_path[x]+=broken_path[v];
        }
     
    }

}
int main()
{
    Fast
    memset(vis,false,100005);
   ll n,m;
   cin>>n;
   for(ll i=0;i<n-1;i++)
   {
      ll u,v,w;
      cin>>u>>v>>w;
     
      adj[u].push_back(v);
      adj[v].push_back(u);
      if(w==2){
      broken_child[u]=1;
      broken_child[v]=1;
      }

   }
   dfs(1);
   vector<ll>ans;
   for(ll i=1;i<=100000;i++)
   {
       if(broken_path[i]==1)
       ans.push_back(i);
   }
   cout<<ans.size()<<endl;
   for(ll i=0;i<ans.size();i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl;
 

}



   
      
    
        

