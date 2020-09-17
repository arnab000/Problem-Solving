#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

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
ll n,q;
cin>>n>>q;
set<ll>pile;
multiset<ll>num_of_cnt;
ll sum=0;
vector<ll>sura;
for(ll i=0;i<n;i++)
{
  ll k;
  cin>>k;
  if(pile.empty())
  {
      pile.insert(k);
  }
  else
  {
      auto it=pile.upper_bound(k);
      if(it==pile.end())
      {
          it--;
        sum+=k-*it;
        num_of_cnt.insert(k-*it);
      }
      else if(it==pile.begin())
      {
         sum+=*it-k;
         num_of_cnt.insert(*it-k);
      }
      else
      {
          ll x=*it;
          it--;
          ll y=*it;
          num_of_cnt.erase(num_of_cnt.find(x-y));
          num_of_cnt.insert(x-k);
          num_of_cnt.insert(k-y);
      }
      
  pile.insert(k);
  }
}
if(num_of_cnt.empty())
    {
        cout<<0<<endl;
    }
    else{
    auto it=num_of_cnt.rbegin();

cout<<sum-*it<<endl;
    }
while(q--)
{
    ll u,k;
    cin>>u>>k;
    if(u==1)
    {
         if(pile.empty())
  {
      pile.insert(k);
  }
  else
  {
      auto it=pile.upper_bound(k);
      if(it==pile.end())
      {
          it--;
        sum+=k-*it;
        num_of_cnt.insert(k-*it);
      }
      else if(it==pile.begin())
      {
         sum+=*it-k;
         num_of_cnt.insert(*it-k);
      }
      else
      {
          ll x=*it;
          it--;
          ll y=*it;
          num_of_cnt.erase(num_of_cnt.find(x-y));
          num_of_cnt.insert(x-k);
          num_of_cnt.insert(k-y);
      }
      
  pile.insert(k);
  }
    }
    else if(u==0)
    {
        auto it=pile.find(k);
        auto it2=pile.end();
        it2--;
        if(pile.size()==1)
        {
           pile.erase(k);
            cout<<0<<endl;
           continue;
        }
        if(it==it2)
        {
            it--;
            sum-=k-*it;
        num_of_cnt.erase(num_of_cnt.find(k-*it));
        
        }
          else if(it==pile.begin())
      {
          it++;
         sum-=*it-k;
         num_of_cnt.erase(num_of_cnt.find(*it-k));
      }
      else
      {
          it++;
          ll x=*it;
          it--;
          it--;
          ll y=*it;
          num_of_cnt.insert(x-y);
          num_of_cnt.erase(num_of_cnt.find(x-k));
           num_of_cnt.erase(num_of_cnt.find(k-y));
      }
      pile.erase(k);
        
    }
    if(num_of_cnt.empty())
    {
        cout<<0<<endl;
    }
    else{
    auto it=num_of_cnt.rbegin();

cout<<sum-*it<<endl;
    }

}

}



   
      
    
        

