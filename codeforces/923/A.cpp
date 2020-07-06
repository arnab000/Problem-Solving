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
    
   
    long long border=0;
    arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
      {
          border=arr[border-1];
      }
      if(s[i]==s[border])
      {
          border++;
      }
      else
      {
          border=0;
      }
      arr[i]=border;
      
    }
    

}
ll lpf[1000005];
ll vis[1000005];
void sieve()
{
    

    for(ll i=2;i<=1000001;i++)
    {
        if(!vis[i])
        {
            for(ll j=i;j<=1000001;j+=i)
            {
                vis[j]=1;
                lpf[j]=i;
            }
        }
    }
}


int main()
{
   ll n;
   cin>>n;
   sieve();
   ll x=lpf[n];
   ll y=n-x;
   ll ans=1000000000;
  // cout<<y<<endl;
   for(ll i=y+1;i<=n-1;i++)
   {
      if(i==lpf[i])
      ans=min(ans,lpf[i]);
      else
      {
          ans=min(ans,i-lpf[i]+1);
      }
      
   }
   cout<<ans<<'\n';

}



   
      
    
        

