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



int main()
{
 ll n;
 cin>>n;
 map<ll,ll>ma;
 ll ans;
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
    ma[k]++;
    set<ll>s;
    ll mx=-1;
    ll mn=1000000;
    if(ma.size()<=1)
    {
        ans=i+1;
        continue;
    }
    ll cou=0,cou2=0;
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        s.insert(it->second);
        ll y=it->second;
        mx=max(mx,y);
        mn=min(mn,y);

    }
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        if(it->second==mx)
        cou++;
        else if(it->second==mn)
        cou2++;

    }
   if(s.size()==1 && mx==1)
   {
       ans=i+1;
       continue;
   }
  if(s.size()==2 &&cou==1 &&(mx-mn)==1)
  {
       ans=i+1;
       continue;
  }
  if(s.size()==2 && cou2==1 && mn==1)
  {
       ans=i+1;
       continue;
  }
 }
cout<<ans<<endl;

}



   
      
    
        

