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
ll n,m;
ll vis[1000000];
ll mx=1000000000000;
void dfs(ll x,ll d)
{
   //cout<<x<<endl;
    if(d>=vis[x] && vis[x]!=0)
    return;
    vis[x]=d;
    if(x==m)
    {
        mx=min(mx,d);
        
       
    }
    if(x<1)
    return;
    if(x>2*m && x>2*n)
    return;
    
    dfs(2*x,d+1);
   
    dfs(x-1,d+1);
    
}

int main()
{
    Fast
cin>>n>>m;
 dfs(n,0);
 cout<<mx<<endl;

}



   
      
    
        

