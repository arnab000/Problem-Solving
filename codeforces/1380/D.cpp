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
vector<ll>sura;
ll s,t,d;
ll ans=0;
ll solve(ll l, ll r, ll mx,ll mx1)
{
    
    if(l>r)
    return 0;
    ll x;
    if(s%t==0)
    x=s/t;
    else
    {
        x=(s/t)+1;
    }
    
    ll y=d;
    if(r-l+1<t)
    {
        if(mx>mx1)
        {
            return -1;
        }
        else
        {
            ans+=(r-l+1)*y;
        }
    }
    else
    {
        if(x>y)
        {

        if(mx>mx1)
        {
            ans+=s;
            ans+=(r-l+1-t)*y;
        }
        else
        {
            ans+=(r-l+1)*y;
        }
        }
        else
        {
             ans+=((r-l+1)/t)*s;
             ans+=((r-l+1)%t)*y;
        }
    }
    return 0;
    

}



int main()
{
   ll n,m;
  cin>>n>>m;
  cin>>s>>t>>d;
vector<ll>mura;

for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
    sura.push_back(k);
    
}
ll pit=0;
for(ll i=0;i<m;i++)
{
    ll k;
    cin>>k;
    mura.push_back(k);
   
}
ll i=0 ,j=0;
ll prev=0;
bool hbe =true;
ll mx=0;
while(i<n && j<m)
{
    if(sura[i]==mura[j])
    {
      pit++;
      ll ass=solve(prev,i-1,mx,mura[j]);
      if(ass==-1)
      hbe=false;
      prev=i;
      mx=0;
      i++;
      j++;
      break;

    }
    else
    mx=max(mx,sura[i]);


    i++;
    
}

while(i<n && j<m)
{
     if(sura[i]==mura[j])
    {
      pit++;
      ll ass=solve(prev+1,i-1,mx,max(sura[prev],sura[i]));
      if(ass==-1)
      hbe=false;
      prev=i;
     mx=0;
     j++;
    }
    else
    mx=max(mx,sura[i]);

    i++;

}

for(ll e=prev+1;e<n;e++)
{
    mx=max(mx,sura[e]);
}

ll o=solve(prev+1,n-1,mx,sura[prev]);
if(o==-1)
hbe=false;

if(hbe && pit==m)
{
    cout<<ans<<endl;
}
else
{
   cout<<-1<<endl;
}



}



   
      
    
        

