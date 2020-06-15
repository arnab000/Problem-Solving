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
 
 vector<ll>adj[100001];
   bool vis[100001];
   ll level[100001];
   ll parent[100001];

   
 void bfs( ll u )
 {
   bool cycle=false;
     vis[u]=true;
     level[u]=0;
     queue<ll>pq;
     pq.push(u);
     ll parent2,endnode;
     while(!pq.empty() && !cycle)
     {
         ll d=pq.front();
         pq.pop();
         for(ll i=0;i<adj[d].size();i++)
         {
            ll r= adj[d][i];

            if(vis[r] && r!=parent[d])
            {
                cycle=true;
                endnode=r;
                parent2=d;
                break;
            }
            if(!vis[r])
            {
                pq.push(r);
                vis[r]=true;
             level[r]=level[d]+1;
             parent[r]=d;

            }

         }
     }
     if(cycle)
     {
         vector<ll>ans1,ans2;
         ans1.push_back(endnode);
         ans2.push_back(parent2);
         if(level[endnode]>level[parent2])
         {
            while (level[endnode]!=level[parent2])
            {                                       
                endnode=parent[endnode];
                ans1.push_back(endnode);
            }
            
         }
          if(level[parent2]>level[endnode])
         {
            while (level[parent2]!=level[endnode])
            {                                       
                parent2=parent[parent2];
                ans2.push_back(parent2);
            }
            
         }
        
         while(1)
         {
             
             

             parent2=parent[parent2];
             endnode=parent[endnode];
            
             if(parent2!=endnode)
             {
                 ans2.push_back(parent2);
                 ans1.push_back(endnode);
             }
             if(parent2==endnode)
             {
                 ans1.push_back(endnode);
                 break;
             }
         }
        reverse(ans1.begin(),ans1.end());
        cout<<2<<endl;
        cout<<ans1.size()+ans2.size()<<endl;
        for(ll i=0;i<ans1.size();i++)
        {
            cout<<ans1[i]<<" ";
        }
         for(ll i=0;i<ans2.size();i++)
        {
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
        exit(0);
     }
     

   
 }
int main()
{

    for(ll i=0;i<=100001;i++)
    {
        vis[i]=false;
    }
   ll n,m,k;
   cin>>n>>m>>k;
for(ll i=0;i<m;i++)
{
    ll x,y;
    cin>>x>>y;
    if(x>k || y>k )
    continue;
    adj[x].push_back(y);
    adj[y].push_back(x);

}
ll ans=0;
for(ll i=1;i<=k;i++)
{
   if(!vis[i])
   {
       bfs(i);
    
   }
}
vector<ll>odd,even;
for(ll i=1;i<=k;i++)
{
    if(level[i]%2==0)
    {
        even.push_back(i);
    }
    else
    odd.push_back(i);
}
if(odd.size()>even.size())
{
    cout<<1<<endl;
    for(ll i=0;i<(k+1)/2;i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
}
else
{
    cout<<1<<endl;
    for(ll i=0;i<(k+1)/2;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
}

 
}
 