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


set<ll>adj[100005];
int main()
{
 
ll n,m;
cin>>n>>m;
ll arr[100005];
bool tr[100005];
memset(tr,0,100005);
for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
   arr[i+1]=k;
   tr[k]=true;
}
for(ll i=0;i<m;i++)
{
    ll u,v;
    cin>>u>>v;
   if(arr[u]!=arr[v]){
    adj[arr[u]].insert(arr[v]);
    adj[arr[v]].insert(arr[u]);
   }
   
}
ll mn=-1;
ll ans;
for(ll i=1;i<=100000;i++)
{
   // cout<<adj[i].size()<<" "<<i<<endl;
   ll x=adj[i].size();
    if(mn<x && tr[i])
    {
        mn=x;
        ans=i;
    }
   
}
cout<<ans<<endl;
}



   
      
    
        

