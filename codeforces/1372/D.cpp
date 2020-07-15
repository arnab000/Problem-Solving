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
vector<ll>sura;
for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
    sura.push_back(k);

}
for(ll i=0;i<n;i++)
{
    
    sura.push_back(sura[i]);
    
}
vector<ll>even,odd;
for(ll i=0;i<sura.size();i++)
{
     if(i%2)
     even.push_back(sura[i]);
     else
     odd.push_back(sura[i]);
}
ll ans=-1;
ll d=n-(n/2);
ll ans1=0,ans2=0;
ll i;
for( i=0;i<d;i++)
{
    ans1+=odd[i];
    ans2+=even[i];
   
}
ans=max(ans,ans1);
ans=max(ans,ans2);
ll j=0;
for(;i<n;i++)
{
    ans1+=odd[i];
    ans1-=odd[j];
    
    ans2+=even[i];
     ans2-=even[j];
     j++;
     ans=max(ans,ans1);
ans=max(ans,ans2);
   
}
cout<<ans<<endl;

}



   
      
    
        

