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
vector<ll>adj[1001];ll s[1001];bool vis[1001];
 void dfs(long long n)
{

 vis[n]=true;
s[n]=1;
 
for(long long i=0;i<adj[n].size();i++)
{
long long v=adj[n][i];
if(!vis[v])
{
vis[v]=true;

 
dfs(v);
s[n]+=s[v];
 
}
 
}
 
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {ll n,k;
    cin>>n>>k;
   
     for(ll i=0;i<=n;i++)
     {
         adj[i].clear();
     }
     for(ll i=0;i<=n;i++)
     {
         vis[i]=false;
     }
     for(ll i=0;i<=n;i++)
     {
         s[i]=0;
     }


       for(ll i=0;i<n-1;i++)
       {
           ll u,v;
           cin>>u>>v;

           adj[u].push_back(v);
           adj[v].push_back(u);
       }
        dfs(k);
      ll son=s[k]-1;
   
       if(adj[k].size()==1 || adj[k].size()==0)
       {
           cout<<"Ayush"<<endl;
           continue;
       }
     
      
      if(son%2==0)
       {
           cout<<"Ashish"<<endl;
       }
       else
       {
         cout<<"Ayush"<<endl;
       }
       

    }
    


  }



   
      
    
        

