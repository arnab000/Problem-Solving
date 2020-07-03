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
    Fast
 ll n,p;
 cin>>n>>p;
 vector<ll>sura;
 ll mn=3000, mx=-1;
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
     mx=max(mx,k);
     mn=min(mn,k);
     sura.push_back(k);
 }
 sort(sura.begin(),sura.end());
 vector<ll>ans;
 for(ll i=mn;i<=mx;i++)
 { ll x=i;
 ll cou=upper_bound(sura.begin(),sura.end(),x)-sura.begin();
 if(cou<p )
 {   
     map<ll,ll>ma;
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
         if(x>=sura[j])
         {
             x++;
         }
        else if(x<sura[j])
         {
             hbe=false;
             break;
         }
     }
     if(hbe)
     ans.push_back(i);
 }
    
 }
 cout<<ans.size()<<endl;
 for(ll i=0;i<ans.size();i++)
 {
     cout<<ans[i]<<" ";
 }
 cout<<endl;


}



   
      
    
        

