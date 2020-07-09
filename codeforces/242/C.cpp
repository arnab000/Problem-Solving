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
 const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
ll startl,startr;
ll endl1,endr;
map<pair<ll,ll>,bool>vis;
map<pair<ll,ll>,bool>valid;
map<pair<ll,ll>,ll>dist;
void dfs(ll x, ll y)
{
    
    vis[{x,y}]=true;
   queue<pair<ll,ll>>q;
   q.push({x,y});
   while(!q.empty())
   {
       pair<ll,ll>u=q.front();
       q.pop();
       for(ll i=0;i<8;i++)
       {
          ll nx=u.first+dx[i];
          ll ny=u.second+dy[i];
        //  cout<<nx<<" "<<ny<<endl;
          if(!vis[{nx,ny}] && valid[{nx,ny}])
          {
              dist[{nx,ny}]=dist[{u.first,u.second}]+1;
              vis[{nx,ny}]=true;
              q.push({nx,ny});
          }


       }

   }


}


int main()
{
 Fast
cin>>startl>>startr>>endl1>>endr;
ll n;
cin>>n;
for(ll i=0;i<n;i++)
{
    ll r,u,v;
    cin>>r>>u>>v;
    for(ll j=u;j<=v;j++)
    {
       valid[{r,j}]=true;
    }
}
dfs(startl,startr);
if(vis[{endl1,endr}]){
    cout<<dist[{endl1,endr}];
}
else
cout<<-1<<endl;


}



   
      
    
        

