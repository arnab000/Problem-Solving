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
ll arr[200001];
ll cou[200001];
ll n,k;
bool solve (ll x)
{
    for(ll i=1;i<=n;i++)
{
    cou[i]=0;
}
    ll curr=0;
  for(ll i=1;i<=n;i++)
  {
      
      if(arr[i]<=x){
      curr++;
      cou[i]++;
      }
  }
  
  if(curr>=k)
  return true;
  if(k%2)
  {
      ll si1=(k+1)/2;
      ll si2=k/2;
      bool evenfill=false,oddfill=false;
      ll start1,start2;
      ll even=0,odd=0;
      for(ll i=1;i<=n;i++)
      {
          if(cou[i]>0)
          {
              start1=i;
              odd++;
              break;
          }
      }
       
      for(ll i=start1+1;i<=n;i++)
      { if(odd<=0)
          break;
           if(cou[i]>0 && i-start1>1)
           {
               start1=i;
               odd++;
           }
      }
     
    for(ll i=2;i<n;i++)
      {
          if(cou[i]>0)
          {
              start2=i;
              even++;
              break;
          }
      }
        
      for(ll i=start2+1;i<n;i++)
      { if(even<=0)
          break;
           if(cou[i]>0 && i-start2>1)
           {
               start2=i;
               even++;
           }
      }
      
      if(odd>=si1)
      oddfill=true;
      if(even>=si2)
      evenfill=true;
      if(oddfill || evenfill)
      return true;
      else
      {
          return false;
      }
      


  }else
  {
      ll si1=k/2;
      ll si2=k/2;
      bool evenfill=false,oddfill=false;
      ll start1,start2;
      ll even=0,odd=0;
      for(ll i=1;i<n;i++)
      {
          if(cou[i]>0)
          {
              start1=i;
              odd++;
              break;
          }
      }
      for(ll i=start1+1;i<n;i++)
      {
          if(odd<=0)
          break;
           if(cou[i]>0 && i-start1>1)
           {
               start1=i;
               odd++;
           }
      }
    for(ll i=2;i<=n;i++)
      {
          if(cou[i]>0)
          {
              start2=i;
              even++;
              break;
          }
      }
     
      for(ll i=start2+1;i<=n;i++)
      {
          if(even<=0)
          break;
           if(cou[i]>0 && i-start2>1)
           {
               start2=i;
               even++;
           }
      }
     
      if(odd>=si1)
      oddfill=true;
      if(even>=si2)
      evenfill=true;
      if(oddfill || evenfill)
      return true;
      else
      {
          return false;
      }

      
  }
  
}
 
 
int main()
{
cin>>n>>k;
for (ll i = 1; i <=n; i++)
{
   cin>>arr[i];
}

ll l=0, r=1000000001;
ll ans;
while(r>=l)
{
    ll mid=(l+r)/2;
    //cout<<mid<<endl;
    if(solve(mid))
    {
        r=mid-1;
        ans=mid;
     

    }
    else
    {
        l=mid+1;
    }
    
}
cout<<ans<<endl;

 
}
 
 
 
   
      