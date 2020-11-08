/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/

#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
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
}//send mod-2 for a^-1 if mod is a prime number

ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll subs(ll a,ll b)
{
    return (((a%mod)-(b%mod)+mod)%mod);
}
ll dv(ll a,ll b)
{
    ll inv=binpow(b,mod-2);
    return mul(a,inv);
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
    dsu_sz[root1]+=dsu_sz[root2];
    }
    else
    {
         dsu_sz[root2]+=dsu_sz[root1];
        dsu_arr[root1]=root2;
    }
    return 1ll;
}
/*
vector<ll>adj[100005];
bool vis[100005];
ll dist[100005];
void bfs(ll c)
{
  vis[c]=true;
  dist[c]=0;
  queue<ll>q;
  q.push(c);
while(!q.empty())
{
    ll x=q.front();
    q.pop();
   
    for(ll i=0;i<adj[x].size();i++)
    {
        ll y=adj[x][i];
        if(!vis[y])
        {
            vis[y]=true;
            dist[y]=dist[x]+1;
            
            q.push(y);
        }
    }
 
}
}
*/
ll arr[1501][1501];
map<pair<ll,ll>,bool>ma;

int main()
{
    Fast
    ll h,w,n,m;
    cin>>h>>w>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        arr[u][v]=1;

    }
     for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        arr[u][v]=2;
        
    }
    for(ll i=0;i<h;i++)
    {
        bool bu=false;
        ll pre=0;

        for(ll j=0;j<w;j++)
        {
            if(arr[i][j]==2)
            {
                pre=j+1;
                bu=false;
                continue;
            }
            if(bu)
            {

                ma[{i,j}]=true;
            }
            if(arr[i][j]==1)
            {
                if(!bu)
                {
                    for(ll k=j;k>=pre;k--)
                    {
                        ma[{i,k}]=true;
                    }
                    bu=true;
                }
              
                    ma[{i,j}]=true;
                
                
            }
        }
    }
     for(ll i=0;i<w;i++)
    {
        bool bu=false;
        ll pre=0;

        for(ll j=0;j<h;j++)
        {
            if(arr[j][i]==2)
            {
                pre=j+1;
                bu=false;
                continue;
            }
            if(bu)
            {

                ma[{j,i}]=true;
            }
            if(arr[j][i]==1)
            {
                if(!bu)
                {
                    for(ll k=j;k>=pre;k--)
                    {
                        ma[{k,i}]=true;
                    }
                    bu=true;
                }
               
                    ma[{j,i}]=true;
               
                
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<h;i++)
    {
        for(ll j=0;j<w;j++)
        {
            if(ma[{i,j}])
            ans++;
        }
    }
    cout<<ans<<endl;
 


}



   
      
    
        

