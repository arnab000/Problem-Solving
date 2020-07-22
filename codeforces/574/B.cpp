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
map<ll,bool>vis1;
ll ans=100000000;
for(ll i=1;i<=n;i++)
{
    
    map<ll,bool>vis2;
    for(ll j=0;j<adj[i].size();j++)
    {
        if(vis1[i])
        continue;
        ll u=adj[i][j];
        for (ll k = 0; k < adj[u].size(); k++)
        {
            ll v=adj[u][k];
                auto it=lower_bound(adj[v].begin(),adj[v].end(),i);
                if(it!=adj[v].end()&& *it==i)
                {
                    ll y=(adj[i].size()+adj[u].size()+adj[v].size()-6);
                    ans=min(ans,y);
                }
        }
        
    }
    vis1[i]=true;


}
if(ans==100000000)
cout<<-1<<endl;
else
{
    cout<<ans<<endl;
}


    

}



   
      
    
        

