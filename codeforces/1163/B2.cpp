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
 ll n;
 cin>>n;
map<ll,ll>ma,sura;
ll ans;
for(ll i=1;i<=n;i++)
{
 ll k;
 cin>>k;
 ma[k]++;
 sura[ma[k]]++;
 if(ma[k]*sura[ma[k]]==i && i!=n)
 {
     ans=i+1;
 }else if(ma[k]*sura[ma[k]]==i-1)
 {
     ans=i;
 }
}
if(n!=1)
cout<<ans<<endl;
else
{
    cout<<1<<endl;
}


}



   
      
    
        

