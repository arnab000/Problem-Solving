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
vector<ll>adj[n+1];
for(ll i=0;i<n-1;i++)
{
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
map<ll,ll>col;
for(ll i=1;i<=n;i++)
{
    ll k;
    cin>>k;
    col[i]=k;
}
ll cou=0,mx=-1,cou2=0;
map<ll,ll>sura;
for(ll i=1;i<=n;i++)
{
   ll s=0;
   for(ll j=0;j<adj[i].size();j++)
   {
       if(col[i]!=col[adj[i][j]]){
      s++;
      sura[i]++;
      sura[adj[i][j]]++;
      cou++;
       }
   }
 //  cout<<s<<endl;
   
}
if(cou>=1){
    ll ans;
    for(auto it=sura.begin();it!=sura.end();it++)
    {
        if(it->second>mx)
        {
            mx=it->second;
            ans=it->first;
        }
    }
    
    if(mx==(sura.size()-1)*2)
    {
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
   
    else
    {
        cout<<"NO"<<endl;
    }
    
}
 else if(cou==0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl;
    }
    

}



   
      
    
        

