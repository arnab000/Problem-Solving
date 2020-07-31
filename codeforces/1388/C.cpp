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
ll mod=998244353;
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
ll dsu_arr[100000];
ll dsu_sz[100000];
void dsu(ll n)
{
    for(ll i=0;i<=n;i++)
    {
        dsu_arr[i]=i;
        dsu_sz[i]=1;
    }
}
ll find(ll x)
{
     ll root=x;
    while (root!=dsu_arr[root])
    {
        root=dsu_arr[root];
    }
    while(x!=dsu_arr[x])
    {
        dsu_arr[x]=root;
        x=dsu_arr[x];
    }
    return root;
}
ll merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return 0ll;
 
    if(dsu_sz[x]>dsu_sz[y]){
    dsu_arr[root2]=root1;
    dsu_sz[x]+=dsu_sz[y];
    }
    else
    {
         dsu_sz[y]+=dsu_sz[x];
        dsu_arr[root1]=root2;
    }
    return 1ll;
}
#define m 100005
vector<long long>adj[m];
long long s[m],people[m],hs[m];
ll happy[m];
bool vis[m];
bool hbe=true;
void dfs(long long n)
{
vis[n]=true;

s[n]=people[n];
ll h_p=0;
for(long long i=0;i<adj[n].size();i++)
{
long long v=adj[n][i];

if(!vis[v])
{
vis[v]=true;

 
dfs(v);

s[n]+=s[v];
h_p+=hs[v];
 
}

 
}
if((s[n]+happy[n])%2!=0)
hbe=false;
ll g_p=((s[n]+happy[n])/2);
if(g_p>s[n])
hbe=false;
if(h_p>g_p)
hbe=false;
hs[n]=g_p;
//cout<<n<<" "<<g_p<<" "<<h_p<<" "<<happy[n]<<" "<<s[n]<<" "<<hbe<<endl;



 
}




int main()
{
ll test;
cin>>test;
while(test--){

ll pitha,lava;
hbe=true;
cin>>pitha>>lava;


for(ll i=1;i<=pitha;i++)
{
    vis[i]=false;
  
    
    adj[i].clear();

}
for(ll i=1;i<=pitha;i++)
{
    cin>>people[i];
}
for(ll i=1;i<=pitha;i++)
{
    cin>>happy[i];
}
for(ll i=1;i<pitha;i++)
{
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

dfs(1);


if(hbe)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}


}



   
      
    
        

