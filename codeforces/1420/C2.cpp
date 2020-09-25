


   #pragma GCC optimize("Ofast")
   #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 #pragma GCC optimize("unroll-loops")





#include<bits/stdc++.h>
using namespace std;
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

int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
   ll n,r;
     cin>>n>>r;
     vector<ll>sura;
     sura.push_back(0);
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         sura.push_back(k);
     }
     ll sum=0;
     for(ll i=1;i<=n;i++)
     {
         sum+=max(0ll,sura[i]-sura[i-1]);

     }
     sura.push_back(0);
     cout<<sum<<'\n';
     while(r--)
     {
         ll p,q;
         cin>>p>>q;
         ll x=sura[p];
         ll y=sura[q];
         if(abs(p-q)==1)
         {
          sum-=max(0ll,sura[p]-sura[p-1]);
          sum-=max(0ll,sura[p+1]-sura[p]);
          sum-=max(0ll,sura[q+1]-sura[q]);
          swap(sura[p],sura[q]);
          sum+=max(0ll,sura[p]-sura[p-1]);
          sum+=max(0ll,sura[p+1]-sura[p]);
          sum+=max(0ll,sura[q+1]-sura[q]);
          cout<<sum<<endl;
          continue;
         }
         sum-=max(0ll,sura[p]-sura[p-1]);
         sum-=max(0ll,sura[p+1]-sura[p]);
         sum-=max(0ll,sura[q]-sura[q-1]);
         sum-=max(0ll,sura[q+1]-sura[q]);
         sura[p]=y; sura[q]=x;
         sum+=max(0ll,sura[p]-sura[p-1]);
         sum+=max(0ll,sura[p+1]-sura[p]);
         sum+=max(0ll,sura[q]-sura[q-1]);
         sum+=max(0ll,sura[q+1]-sura[q]);
         cout<<sum<<'\n';
     }
 
 }


}



   
      
    
        

