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


int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
  ll n,m;
  char baal;
  cin>>n>>m;
  ll ans=-1;
  vector<ll>parents;
  vector<pair<ll,ll>>childs;
  ll arr[m+1];
  for(ll i=0;i<m;i++)
  {
      ll parent,child;
      cin>>parent>>child;
      childs.push_back({child,parent});
      parents.push_back(parent);
  }
  arr[m]=0;
  sort(parents.begin(),parents.end());
  sort(childs.rbegin(),childs.rend());
  for(ll i=m-1;i>=0;i--)
  {
      arr[i]=arr[i+1]+parents[i];
  }
  for(ll i=0;i<m;i++)
  {
      auto it=lower_bound(parents.begin(),parents.end(),childs[i].first);
      if(it==parents.end())
      {
          ans=max(ans,childs[i].second+(n-1)*childs[i].first);
      }
      else{
          ll t=n;
          ll nit=it-parents.begin();
          ll p=(m-nit);
          if(p>t)
          {
              ans=max(ans,arr[nit+(p-t)]);
          }
          else if(p==t)
          {
              ans=max(ans,arr[nit]);
          }
          else{
              t-=p;
              ll extra;
              if(childs[i].first>childs[i].second)
              {
                  extra=childs[i].second+(t-1)*childs[i].first;
              }
              else
              {
                  extra=(t)*childs[i].first;
              }
              ans=max(ans,arr[nit]+extra);
          }
      }
  }
  cout<<ans<<endl;
  
  
 }


}



   
      
    
        

