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
ll fen1[1000006];
ll fen2[1000006];
void add_sum(ll x,ll y)
{
    for(ll i=x;i<=1000006;i+=(i&(-i)))
    {
        fen1[i]+=y;
    }

}
void add_sum2(ll x,ll y)
{
    for(ll i=x;i<=1000006;i+=(i&(-i)))
    {
        fen2[i]+=y;
    }

}
ll get_sum(ll x)
{
    ll ans=0;
    for(ll i=x;i>0;i-=(i&-i))
    {
        if(i<=0)
        break;
        ans+=fen1[i];
    }
    return ans;
}
ll get_sum2(ll x)
{
    ll ans=0;
    for(ll i=x;i>0;i-=(i&-i))
    {
        if(i<=0)
        break;
        ans+=fen2[i];
    }
    return ans;
}



int main()
{
 ll n;
 cin>>n;
 vector<ll>sura;
 map<ll,ll>ma;
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
    sura.push_back(k);
    ma[k]=i;
 }
 ll num=1;
 for(auto it=ma.begin();it!=ma.end();it++)
 {
    
     sura[it->second]=num;
     num++;
 }

 ll ans=0;
 for(ll i=n-1;i>=0;i--)
 {
     ll d=get_sum(sura[i]);
     add_sum(sura[i],1);
     ll p=get_sum2(sura[i]);
     add_sum2(sura[i],d);
     ans+=p;

 }
 cout<<ans<<endl;


}



   
      
    
        

