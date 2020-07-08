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
ll n,m,k;
vector<ll>sura;
vector<ll>cycle;

bool solve(ll x){
 ll i=x-1,j=n-1;
 ll cou=0;
 ll u=k;
 while(i>=0 && j>=0)
 {
     if(sura[j]>=cycle[i])
     {
         cou++;
     }
     else if(sura[j]+u>=cycle[i])
     {
         cou++;
         u-=(cycle[i]-sura[j]);
     }
     else
     break;
     i--;
     j--;
 }
 //cout<<cou<<" "<<x<<endl;
   if(cou==x)
   return true;
   else
   {
       return false;
   }
   

}


int main()
{
    Fast
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++)
    {
        ll y;
        cin>>y;
        sura.push_back(y);
    }
    for(ll i=0;i<m;i++)
    {
        ll y;
        cin>>y;
        cycle.push_back(y);
    }
    sort(sura.begin(),sura.end());
    sort(cycle.begin(),cycle.end());
    ll l=0,r=min(n,m);
    ll ans;
    while(r>=l)
    {
        ll mid=(l+r)/2;
        if(solve(mid))
        {
            ans=mid;
            l=mid+1;
           // cout<<ans<<endl;
        }
        else
        {
            r=mid-1;
        }
        
    }
    ll sum=0;
    for(ll i=0;i<ans;i++)
    {
       sum+=cycle[i];
    }
    sum-=k;
    cout<<ans<<" "<<max(0ll,sum)<<endl;

}



   
      
    
        

