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



int main()
{
    ll test;
    cin>>test;
    while(test--)
    {ll n,k;
    cin>>n>>k;
   
       vector<ll>adj[n+5];
     
       for(ll i=0;i<n-1;i++)
       {
           ll u,v;
           cin>>u>>v;

           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       if(adj[k].size()==1 || adj[k].size()==0)
       {
           cout<<"Ayush"<<endl;
           continue;
       }

      ll son=n-1;
     
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



   
      
    
        

