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
ll arr[100005];
 ll n;
bool solve(ll x)
{
    bool hbe=true;
   vector<ll>s;
   for (ll i = 1; i <=n; i++)
   {
       s.push_back(arr[i]);
   }
   sort(s.rbegin(),s.rend());
   ll t=n;
   for(ll i=0;i<n;i++)
   {
       if(s[i]==0 || s[i]==1)
       break;
       ll y=s[i]+(x*(s[i]-1));
       if(y>t)
       hbe=false;
       t--;
   }
   return hbe;
   
}

int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
    
     cin>>n;
     for(ll i=0;i<=n;i++)
     {
         
         arr[i]=0;
     }
    ll mx=-1;
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         arr[k]++;
         mx=max(arr[k],mx);

     }
     //cout<<mx<<endl;
     if(mx==1)
     {
         cout<<n<<endl;
         continue;
     }
     ll l=1,r=200005;
     ll ans=0;
     while (r>=l)
     {
        ll mid=(l+r)/2;
        if(solve(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        r=mid-1;
     }
     cout<<ans<<endl;
     

 }


}



   
      
    
        

