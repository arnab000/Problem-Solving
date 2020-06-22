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
ll arr[100005];
ll n,w,m;
 bool solve(ll x,ll moves)
 {
     queue<pair<ll,ll> >sura;
     ll pasa=0;
     for(ll i=0;i<n;i++)
     {
         if(!sura.empty())
         {
             pair<ll,ll> u=sura.front();
             if(u.first==i){
             pasa-=u.second;
             sura.pop();
             }

         }
         ll d=arr[i]+pasa;
         if(d<x)
         {
             moves-=(x-d);
             
             pasa+=(x-d);
             sura.push({i+w,(x-d)});

         }
     }
     if(moves<0)
     return false;
     else
     return true;

 }
int main()
{

cin>>n>>m>>w;
ll l=0,r=1000000005+100005;
for(ll i=0;i<n;i++)
{
    cin>>arr[i];
}
ll ans;
while(r>=l)
{
    ll mid=(l+r)/2;
    if(solve(mid,m))
    {
     ans=mid;
     l=mid+1;
    }
    else
    {
        r=mid-1;
    }
    
}
cout<<ans<<endl;
 
}
 
 
 
   
      