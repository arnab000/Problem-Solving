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
     long long border=0; arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
        border=arr[border-1];
     
     if(s[i]==s[border])
         border++;
      else
       border=0;
      
      arr[i]=border;
    }
}
ll mod=1000000000+7;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
//send mod-2 for a^-1 if mod is a prime number
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}


ll child[100005];
bool vis1[100005];
vector<ll>adj[100005];
 


 void dfs(ll x)
 {
     vis1[x]=true;
     child[x]=1;
     for(ll i=0;i<adj[x].size();i++)
     {
         ll v=adj[x][i];
         if(!vis1[v])
         {
          
             vis1[v]=true;
             dfs(v);
             child[x]+=child[v];
         }

     }

 }



int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
     for(ll i=0;i<=n;i++)
     {
     
         vis1[i]=false;
         child[i]=0;
         
         adj[i].clear();

     }
     for(ll i=0;i<n-1;i++)
     {
         ll u,v;
         cin>>u>>v;
         adj[u].push_back(v);
         adj[v].push_back(u);

     }
    
     
   
     dfs(1);
     vector<ll>sura;
    
    for(ll i=2;i<=n;i++)
    {
      
    sura.push_back(child[i]*(n-child[i]));
       
    }
     ll q;
     cin>>q;
     vector<ll>prime;
     for(ll i=0;i<q;i++)
     {
         ll k;
         cin>>k;
         prime.push_back(k);
     }
     sort(sura.rbegin(),sura.rend());
     sort(prime.rbegin(),prime.rend());

     ll ma=0;
     
   
     while(prime.size()>n-1)
     {
        ll x=prime[0];
        prime.erase(prime.begin());
        prime[0]=mul(prime[0],x);
    
        
     }
       
     while(prime.size()<n-1)
     {
    prime.push_back(1);
    q++;
     }
for(ll i=0;i<prime.size();i++)
{
    
    ma=add(ma,mul(sura[i],prime[i]));
}
      
     cout<<ma<<endl;

 }


}



   
      
    
        

