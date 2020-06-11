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
        ll n,x,m;;
        cin>>n>>x>>m;
        ll l=x,r=x;
        bool hbe=false;
        for(ll i=0;i<m;i++)
        {
            ll u,v;
            cin>>u>>v;
            if(!hbe)
            {
                if(x>=u && x<=v)
                {
                    hbe=true;
                }
            }
            if(hbe)
            {
                if(l>=u && l<=v)
                l=min(l,u);
                if(r>=u && r<=v)
                r=max(r,v);
            }
        }
        cout<<r-l+1<<endl;

                      
    }
    


  }



   
      
    
        

