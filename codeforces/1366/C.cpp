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
    {
        map<ll,vector<ll> >sura;
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                ll nu;
                cin>>nu;
                sura[i+j].push_back(nu);
            }
        }
        ll co=0;
        auto y=sura.end();
        ll ans=0;
        for(auto it=sura.begin();co<sura.size()/2;it++)
        {
               y--;
               map<ll,ll>ma;
               ll g=it->first;
               ll g1=y->first;
               for(ll e=0;e<sura[g].size();e++)
               {
                   ma[sura[g][e]]++;
               }
               for(ll e=0;e<sura[g1].size();e++)
               {
                   ma[sura[g1][e]]++;
               }
               ans+=min(ma[0],ma[1]);
               co++;

        }
        cout<<ans<<endl;


                      
    }
    


  }



   
      
    
        

