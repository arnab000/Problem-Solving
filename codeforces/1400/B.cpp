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
     ll lc,fc,sc,ac,sw,aw;
     cin>>lc>>fc;
     cin>>sc>>ac;
     cin>>sw>>aw;
     if(sw>aw)
     {
         swap(sc,ac);
         swap(sw,aw);
     }
     ll ans=0;
     for(ll i=0;i<=sc;i++)
     {
         ll cnt=0;

        ll nlc=lc,nfc;
        nfc=fc;
        ll nac=ac;
        ll nsc=sc;
        
        if(i*sw<=nlc)
        {
            nlc=nlc-(i*sw);
            cnt+=i;
            nsc-=i;
        }
        ll extra_axe=(nlc/aw);
        cnt+=min(extra_axe,nac);
        nac-=min(extra_axe,nac);
        ll follower_sword=min((nfc/sw),nsc);
        cnt+=follower_sword;
        nfc-=follower_sword*sw;
        ll follower_axe=min(nfc/aw,nac);
        cnt+=follower_axe;
        nfc-=follower_axe*aw;
        ans=max(ans,cnt);

     }
     cout<<ans<<endl;

 }


}



   
      
    
        

