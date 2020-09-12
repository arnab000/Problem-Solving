/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<ll , pair<ll, ll> > pi;


int ma[5050];

vector<pair<ll,ll>>adj[5050];
int vis[5050];
int processed[5050];

bool hbe;
void bfs(ll c)
{
 vis[c]=1;
 for(ll i=0;i<adj[c].size();i++)
 {
     ll u=adj[c][i].first;
     if(vis[u]==1 && processed[u]==0)
     {
         
        ma[adj[c][i].second]=1;
         hbe=true;
         
     }
     else if(!vis[u])
     {
         vis[u]=1;
         bfs(u);
     }
     
 }
 processed[c]=1;
}


int main()
{
    Fast
    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back({v,i});
       
        
    }
    for(ll i=1;i<=n;i++)
    {
       if(!vis[i])
       {
           bfs(i);
       }
    }
    if(!hbe)
    {
        cout<<1<<endl;
        for(ll i=0;i<m;i++)
        {
            cout<<1<<' ';
        }
        cout<<endl;
    }
    else
    {
        cout<<2<<endl;
        for(ll i=0;i<m;i++)
        {
            if(ma[i]==1)
            {
                cout<<2<<" ";
            }
            else
            {
                cout<<1<<" ";
            }
            
        }
        cout<<endl;
    }

 


}



   
      
    
        

