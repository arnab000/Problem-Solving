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
ll n,m,k;

vector<ll>adj[150001];


int main()
{
    Fast

cin>>n>>m;


for(ll i=0;i<m;i++)
{
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
for(ll i=1;i<=n;i++)
{
    sort(adj[i].begin(),adj[i].end());
}
bool vis[150001];
memset(vis,150001,false);
bool hbe=true;
for(ll i=1;i<=n;i++)
{
    if(!hbe)
    break;
    if(adj[i].size()==0 || vis[i]==true)
    continue;
    for(ll j=0;j<adj[i].size();j++)
    {if(!hbe)
    break;
        ll u=adj[i][j];
        for(ll k=0;k<adj[u].size();k++)
        {
            ll v=adj[u][k];
            
            
          auto it=lower_bound(adj[i].begin(),adj[i].end(),v);
          if(v==i)
          continue;
            if(it==adj[j].end() || *it!=v)
            hbe=false;
        }
        //cout<<u<<" "<<adj[u].size()<<" "<<i<<" "<<adj[i].size()<<endl;
        if(adj[u].size()!=adj[i].size())
        hbe=false;
        vis[u]=true;
    }
    
}
if(hbe)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    

}



   
      
    
        

