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
char grid[1001][1001];
ll n,m,el,er;
map<pair<ll,ll>,bool> vis;map<pair<ll,ll>,bool> vis2;
void dfs(ll x, ll y,char a, ll cou)
{ if( vis[{x,y}] && cou>vis2[{x,y}])
return;
    if(x<0 || y<0 || x>=n || y>=m)
    return;
if(grid[x][y]=='*')
return;
if(cou>2)
return;
vis[{x,y}]=true;
vis2[{x,y}]=cou;
    if(a=='N')
    {
        dfs(x+1,y,'L',0);
         dfs(x,y+1,'R',0);
          dfs(x-1,y,'U',0);
           dfs(x,y-1,'D',0);
    }
    else
    {
        if(a=='L')
        {
             dfs(x+1,y,'L',cou);
         dfs(x,y+1,'R',cou+1);
          dfs(x-1,y,'U',cou+1);
           dfs(x,y-1,'D',cou+1);
             
        }
        else if(a=='R')
        {
                dfs(x+1,y,'L',cou+1);
         dfs(x,y+1,'R',cou);
          dfs(x-1,y,'U',cou+1);
           dfs(x,y-1,'D',cou+1);
        }
        else if(a=='U')
        {
                dfs(x+1,y,'L',cou+1);
         dfs(x,y+1,'R',cou+1);
          dfs(x-1,y,'U',cou);
           dfs(x,y-1,'D',cou+1);
        }
        else
        {
                dfs(x+1,y,'L',cou+1);
         dfs(x,y+1,'R',cou+1);
          dfs(x-1,y,'U',cou+1);
           dfs(x,y-1,'D',cou);
        }
        
    
    }
}


int main()
{
 Fast
 cin>>n>>m;
 ll sl,sr;
 for(ll i=0;i<n;i++)
 {
     for(ll j=0;j<m;j++)
     {
         cin>>grid[i][j];
         if(grid[i][j]=='S')
         {
            sl=i,sr=j;

         }
         if(grid[i][j]=='T')
         {
            el=i,er=j;
            
         }
     }
 }
 dfs(sl,sr,'N',0);
 if(vis[{el,er}])
 cout<<"YES"<<endl;
 else
 {
     cout<<"NO"<<endl;
 }
 


}



   
      
    
        

