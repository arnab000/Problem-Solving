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
ll n;
bool check (ll y,ll x)
{
 if(x==1000001 && y==n)
 return false;
 if(x==0 && y==1)
 return false;
 if(x<0 || x>1000001)
 return false;
 if(y<0 || y>n )
 return false;

 return true;


}
int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {ll u,v;
 cin>>n>>u>>v;
 ll cost=u;
 vector<ll>sura;
 set<ll>s;
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
     sura.push_back(k);
     s.insert(k);

 }
 bool jail1=true;
 ll lagbe1=1;

 for(ll i=1;i<n;i++)
 {
     if(abs(sura[i]-sura[i-1])>=2)
     {
         jail1=false;
         cost=0;
         break;
     }
    
}
for(ll i=0;i<n;i++)
{
bool done=check(i+1,sura[i]+1);
if(done)
{
    if(i==0)
    {
        ll p=abs(sura[i+1]-(sura[i]+1));
    if(p>=2)
    cost=min(cost,v);


    }
    else if(i==n-1)
    {
        ll q=abs(sura[i-1]-(sura[i]+1));
        if(q>=2)
    cost=min(cost,v);
    }
    else
    {
         ll p=abs(sura[i+1]-(sura[i]+1));
    if(p>=2)
    cost=min(cost,v);
    ll q=abs(sura[i-1]-(sura[i]+1));
        if(q>=2)
    cost=min(cost,v);

    }
}
done=check(i+1,sura[i]-1);
if(done)
{
    if(i==0)
    {
        ll p=abs(sura[i+1]-(sura[i]-1));
    if(p>=2)
    cost=min(cost,v);


    }
    else if(i==n-1)
    {
        ll q=abs(sura[i-1]-(sura[i]-1));
        if(q>=2)
    cost=min(cost,v);
    }
    else
    {
         ll p=abs(sura[i+1]-(sura[i]-1));
    if(p>=2)
    cost=min(cost,v);
    ll q=abs(sura[i-1]-(sura[i]-1));
        if(q>=2)
    cost=min(cost,v);

    }
}

}
cost=min(cost,2*v);
// cout<<lagbe1<<" "<<lagbe2<<endl;
 if(s.size()==1)
 {
     cout<<min(v+v,u+v)<<'\n';
     continue;
 }
 if(jail1 )
 {
     cout<<cost<<'\n';
 }
 else
 cout<<0<<'\n';


 }


}



   
      
    
        

