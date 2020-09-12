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


map<pair<ll,ll>,bool>ma;

vector<ll>adj[5005];
bool vis[5005];
bool processed[5005];

bool hbe=false;
void bfs(ll c)
{
 vis[c]=true;
 for(ll i=0;i<adj[c].size();i++)
 {
     ll u=adj[c][i];
     if(vis[u] && !processed[u])
     {
         
         ma[{c,u}]=true;
         hbe=true;
     }
     else if(!vis[u])
     {
         bfs(u);
     }
     
 }
 processed[c]=true;
}


int main()
{
    Fast
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>sura;
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        sura.push_back({u,v});
        
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
            if(ma[sura[i]])
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



   
      
    
        

