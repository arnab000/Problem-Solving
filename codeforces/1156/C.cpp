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

vector<ll>m;
ll n,z;
bool solve(ll x)
{
    map<ll,ll>ma;
set<ll>sura;
ll a=0;
for(ll i=x;i<n;i++)
{
    ma[m[i]]++;
    sura.insert(m[i]);
}
for(ll i=0;i<x;i++)
{
  
        auto la=sura.lower_bound(m[i]+z);
        if(la!=sura.end())
        {
            a++;
            ma[*la]--;
            if(ma[*la]<=0)
            {
                sura.erase(la);
            }
        }
        else if(la==sura.end())
        break;
   
     
}
//cout<<x<<" "<<a<<endl;
if(a==x)
return true;
else
{
    return false;
}

}

int main()
{
Fast
cin>>n>>z;


for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
    
    m.push_back(k);

}
sort(m.begin(),m.end());


ll ans=0;
ll l=0;
ll r=n/2;

while(l<=r)
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



   
      
    
        

