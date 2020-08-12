#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
    if(y==0)
    return 1;
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
bool vis[205];


int main()
{
ll n,m;
cin>>n>>m;
vector<ll>sura,mura;
for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
 sura.push_back(k);
}
for(ll i=0;i<m;i++)
{
     ll k;
    cin>>k;
 mura.push_back(k);
}

ll paad[10];
for(ll i=0;i<=10;i++)
{
    paad[i]=0;
}
ll lava=0;
 ll cou=0;
while(1){
   
    ll rem1=0;
    ll rem2=0;
    ll mx=0;
for(ll i=0;i<n;i++)
{
    if(vis[rem1]==true)
    continue;
    ll  ans=1000000000;
    ll rem=0;

  
    for(ll j=0;j<m;j++)
    {
        
     ll x=sura[i]&mura[j];
     ll y=0;
    ll a=0;
     
     while(x)
     {
       ll u=x%2;
       x/=2;
       if(paad[y]!=u)
       {
           a+=(po(2,y)*u);
       }
       y++;
       
     }
   
     if(a<ans)
     {
         ans=a;
         rem=j;
     }
     
     
    } 
    
 if(ans>mx)
 {
rem1=i;
rem2=rem;
mx=ans;

 }
  
   
}
vis[rem1]=true;
cou++;
   ll pitha=sura[rem1]&mura[rem2];
  if(mx==0)
  break;
   ll y=0;
   while(pitha)
   {
       ll u=pitha%2;
       pitha/=2;
       if(u)
       paad[y]=u;
       y++;
   }
   if(cou==n)
   break;


}
for(ll i=0;i<=10;i++)
{
    lava+=po(2,i)*paad[i];
}
cout<<lava<<endl;



}



   
      
    
        

