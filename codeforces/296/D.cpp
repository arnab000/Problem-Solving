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
bool vis[505];
memset(vis,false,505);
ll dist[n+2][n+2];
for(ll i=1;i<=n;i++)
{
    for(ll j=1;j<=n;j++)
    {
        cin>>dist[i][j];
    }
}
ll arr[n+2];
for(ll i=1;i<=n;i++)
{
   cin>>arr[i];
}
vector<ll>sura;
for(ll k=n;k>=1;k--)
{ ll res=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(dist[i][arr[k]]+dist[arr[k]][j]<dist[i][j])
            {
                dist[i][j]=dist[i][arr[k]]+dist[arr[k]][j];
            }
        }
    }
    vis[arr[k]]=true;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(vis[i] && vis[j])
            {
                res+=dist[i][j];
            }
        }
    }
    sura.push_back(res);
}
for(ll i=n-1;i>=0;i--)
{
    cout<<sura[i]<<" ";
}
cout<<endl;

}



   
      
    
        

