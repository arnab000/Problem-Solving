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
 ll n,p;
 vector<ll>sura;
ll solve(ll x){
   ll i=x;
   ll y=x;
   for(ll i=0;i<n;i++)
   {
      if(y>=sura[i])
         {
             y++;
         }
        else if(y<sura[i])
         {
             return 1;
         }
   }
 ll cou=upper_bound(sura.begin(),sura.end(),x)-sura.begin();
 if(cou<p )
 {   
    
     x+=cou;
     bool hbe=true;
     for(ll j=cou;j<n;j++)
     {
         
       cou++;   
     ll f=cou-(sura[j]-i);
    
     if(f>=p){
         hbe=false;
         break;
     }
        
     }
     if(hbe)
     return 3;
     
 }
 return 2;
}


int main()
{
    Fast

 cin>>n>>p;

ll mn=100000000000,mx=-1;
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
  mx=max(mx,k);
  mn=min(mn,k);
     sura.push_back(k);
 }
 sort(sura.begin(),sura.end());
 ll l=mn,r=mx;
 ll ans=-1;
 while(r>=l)
 {
     ll mid=(l+r)/2;
     if(solve(mid)==2 || solve(mid)==3)
     {
         r=mid-1;
         ans=mid;
     }
     else
     l=mid+1;
 }
 l=mn,r=mx;
 ll ans1=-1;
  while(r>=l)
 {
     ll mid=(l+r)/2;
     if(solve(mid)==1 || solve(mid)==3)
     {
         l=mid+1;
         ans1=mid;
     }
     else
     r=mid-1;
 }
if(ans!=-1 && ans1!=-1)
{
    cout<<ans1-ans+1<<endl;
    for(ll i=ans;i<=ans1;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
else
cout<<0<<endl;


}



   
      
    
        

