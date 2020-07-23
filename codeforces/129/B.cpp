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

int main()
{
    Fast
 ll n,m;
 cin>>n>>m;
 vector<ll>adj[n+1];
 map<ll,ll>deg;
 for(ll i=0;i<m;i++)
 {
     ll u,v;
     cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
     deg[u]++;
     deg[v]++;

 }
 ll ans=0;
 while (1)
 {
     queue<ll>q;
    for(ll i=1;i<=n;i++)
    {
       if(deg[i]==1)
       {
           q.push(i);
       }
    }
    if(!q.empty())
    ans++;
    else
    {
        break;
    }
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        deg[u]--;
        for(ll i=0;i<adj[u].size();i++)
        {
            deg[adj[u][i]]--;
        }
    }
    
 }
 cout<<ans<<endl;
 

}



   
      
    
        

