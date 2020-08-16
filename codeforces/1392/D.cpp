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
ll dsu_arr[200005];
ll dsu_sz[200005];
ll com;
void dsu(ll n)
{
    for(ll i=0;i<n;i++)
    {
        dsu_arr[i]=i;
        dsu_sz[i]=1;
    }
    com=n;
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
void merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return;
 
    if(dsu_sz[root1]>dsu_sz[root2]){
    dsu_arr[root2]=root1;
    dsu_sz[root1]+=dsu_sz[root2];
    }
    else
    {
         dsu_sz[root2]+=dsu_sz[root1];
        dsu_arr[root1]=root2;
    }
    com--;
    return;
}


int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
     string s;
     ll n;
     cin>>n;
     cin>>s;
     ll baal=-1;
     for(ll i=0;i<n-1;i++)
     {
         if(s[i]!=s[i+1])
         {
             baal=i;
         }
     }
     if(baal==-1)
     {
         cout<<(n+2)/3<<endl;
         continue;
     }
     rotate(s.begin(),s.begin()+baal+1,s.end());
    
     ll ans=0;
      s+='s';
      ll cnt=1;
     for(ll i=0;i<n;i++)
     {
       if(s[i]==s[i+1] && i<n-1)
       {
           cnt++;
       }
       else
       {
         ans+=cnt/3;
         cnt=1;
       }

     }
     cout<<ans<<endl;

 }


}



   
      
    
        

