#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
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
ll arr1[100005];
ll arr2[100005];
ll n,m;
ll solve(ll x)
{
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(arr1[i]<x)
        ans+=(x-arr1[i]);
    }
    for(ll i=0;i<m;i++)
    {
        if(arr2[i]>x)
        {
           ans+=(arr2[i]-x);
        }
    }
    return ans;
}
 

int main()
{
    Fast
     cin>>n>>m;
      for(ll i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(ll i=0;i<m;i++)
    {
       cin>>arr2[i];
    }
    ll l=0,r=10000000005;
    ll ans=500000000000000;

   while (r>=l)
   {
      ll mid1=l+(r-l)/3;
      ll mid2=r-(r-l)/3;
       ll pitha=solve(mid1);
       ll lava=solve(mid2);
     
       ans=min(ans,lava);
       ans=min(ans,pitha);
       if(pitha>=lava)
       l=mid1+1;
       else
       {
           r=mid2-1;
       }
       
       
   }
   cout<<ans<<endl;
   

   
    
 
}
 
 
 
   
      