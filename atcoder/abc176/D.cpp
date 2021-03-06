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
ll dist[1005][1005];
 
bool vis[1005][1005];
vector<pair<pair<ll,ll>,ll>>adj[1005][1005];
char sura[1005][1005];

void dijkstra(ll x,ll y)
{
   
    dist[x][y]=0;
    priority_queue<pair<ll,pair<ll,ll>>, vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>pq;
    pq.push({0,{x,y}});
    while(!pq.empty())
    {
       pair<ll,pair<ll,ll>> u=pq.top();
        pq.pop();
        vis[u.second.first][u.second.second]=true;
      
        if(dist[u.second.first][u.second.second]<u.first)
        continue;
        for(ll i=0;i<adj[u.second.first][u.second.second].size();i++)
        {
           pair<pair<ll,ll>,ll> v=adj[u.second.first][u.second.second][i];
            if(vis[v.first.first][v.first.second])
            continue;
            ll new_dist=dist[u.second.first][u.second.second]+v.second;
            if(new_dist<dist[v.first.first][v.first.second])
            {
                dist[v.first.first][v.first.second]=new_dist;
              
                pq.push({new_dist,{v.first.first,v.first.second}});
            }
 
        }
    }
 
}

int main()
{
    ll h,w;
    ll start1,start2;
    ll end1,end2;
    cin>>h>>w;
    cin>>start1>>start2;
    cin>>end1>>end2;
    for(ll i=0;i<h;i++)
    {
        for(ll j=0;j<w;j++)
        {
            cin>>sura[i][j];
            vis[i][j]=false;
            dist[i][j]=100000000;
            
        }
    }
    for(ll i=0;i<h;i++)
    {
        for(ll j=0;j<w;j++)
        {
            for(ll k=i-2;k<=i+2;k++)
            {
                for(ll r=j-2;r<=j+2;r++)
                {
                    if(k==i && r==j )
                    continue;
                    else if(k==i-1 && r==j &&(k>=0 && k<h)&& (r>=0 && r<w) && sura[k][r]!='#')
                    adj[i][j].push_back({{k,r},0});

                   else if(k==i && r==j-1  && (k>=0 && k<h)&& (r>=0 && r<w) && sura[k][r]!='#')
                    adj[i][j].push_back({{k,r},0});

                   else if(k==i+1 && r==j  && (k>=0 && k<h)&& (r>=0 && r<w) && sura[k][r]!='#')
                     adj[i][j].push_back({{k,r},0});

                  else if(k==i && r==j+1 && (k>=0 && k<h)&& (r>=0 && r<w) && sura[k][r]!='#')
                     adj[i][j].push_back({{k,r},0});

                   else if((k>=0 && k<h)&& (r>=0 && r<w) && sura[k][r]!='#')
                    {
                        adj[i][j].push_back({{k,r},1});
                    }
                }
                
            }
           // cout<<adj[i][j].size()<<endl;
        }
    }
    dijkstra(start1-1,start2-1);

    
    if(vis[end1-1][end2-1])
    {
        cout<<dist[end1-1][end2-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    

 

}



   
      
    
        

