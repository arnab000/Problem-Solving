/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/
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
ll n,m;
cin>>n>>m;
vector<tuple<ll,ll,ll>>sura;
set<pair<ll,ll>>mura;
for(ll i=0;i<m;i++)
{
    ll t,l,r;
    cin>>t>>l>>r;
    sura.push_back({t,l,r});

}
bool vitore=false;
for(ll i=0;i<m;i++)
{
    for(ll j=0;j<m;j++)
    {
        
        if(get<0>(sura[i])==get<0>(sura[j]) && get<0>(sura[i])==1)
        {
            
          ll l1,r1,l2,r2;
          
          l1=get<1>(sura[i]);
          r1=get<2>(sura[i]);
           l2=get<1>(sura[j]);
          r2=get<2>(sura[j]);
          
          if(l1>r2 || l2>r1 )
          {
              
          }else{
          tuple<ll,ll,ll>p ={1ll,min(l1,l2),max(r1,r2)};
          sura[i]=p;
          sura[j]=p;
          }
          
        }
    }
}
for(ll i=0;i<m;i++)
{
    if( get<0>(sura[i]))
    mura.insert({get<1>(sura[i]),get<2>(sura[i])});
}


for(ll i=0;i<m;i++)
{
    for(ll j=0;j<m;j++)
    {
        
        if(get<0>(sura[i])!= get<0>(sura[j]))
        {
            
          ll l1,r1,l2,r2;
          if(get<0>(sura[i])){
          l1=get<1>(sura[i]);
          r1=get<2>(sura[i]);
           l2=get<1>(sura[j]);
          r2=get<2>(sura[j]);
          }
          else if(get<0>(sura[j])){
            l1=get<1>(sura[j]);
          r1=get<2>(sura[j]);
           l2=get<1>(sura[i]);
          r2=get<2>(sura[i]);
          }
         
          if(l2>=l1 && r2<=r1 )
          {
               vitore=true;
          }
          
          
        }
    }
}

if(vitore)
{
    cout<<"NO"<<endl;
    return 0;
}
vector<ll>ans(1005,1);
ll v=10000005;


cout<<"YES"<<endl;

auto j=mura.begin();
for(ll i=1;i<=n;)
{
    
    pair<ll,ll> baal=*j;
    if(i>=baal.first && i<=baal.second)
    {
        for(ll k=baal.first;k<=baal.second;k++){
          cout<<v<<" ";
          i++;
        
        }
        j++;

    }
    else
    {
        cout<<v<<" ";
        i++;
    }
    v--;
}
cout<<endl;


}



   
      
    
        

