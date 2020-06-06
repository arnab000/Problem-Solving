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
 vector<ll>adj[500005];
 vector<pair<ll,ll > >topic;

map<ll,bool>ma;
  map<ll,ll>topi;
int main()
{
   Fast
    ll v,e;
    cin>>v>>e;
    for(ll i=0;i<e;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=0;i<v;i++)
    {
        ll k;
        cin>>k;
        topic.push_back({k,i+1});
        topi[i+1]=k;
      
    }
    sort(topic.begin(),topic.end());
    vector<ll>sura;
    for(ll i=0;i<v;i++)
    {
        ll u=topic[i].second;
        set<ll>s;
       
        for(ll j=0;j<adj[u].size();j++)
        {
            if(topi[adj[u][j]]>=topi[u] && ma[adj[u][j]])
            {
                cout<<-1<<endl;
                return 0;
            }
            if(topi[adj[u][j]]<topi[u])
            {
                s.insert(topi[adj[u][j]]);
            }
          
          

        }
       if(s.size()!=topi[u]-1 && topi[u]>1)
        {
            cout<<-1<<endl;
            return 0;
        }
        ma[u]=true;
        sura.push_back(u);
    }
    for(ll i=0;i<sura.size();i++)
    {
        cout<<sura[i]<<" ";
    }
    cout<<endl;


  }



   
      
    
        

