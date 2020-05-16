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
        ll n;
        vector<ll>sura;
        cin>>n;
        map<ll,ll>ma;
      
        for(ll i=0;i<n;i++)
        {
            ll k;
            cin>>k;
         
            
            ma[k]++;
        }
        ll ans=0;
       
        for(auto it=ma.begin();it!=ma.end();it++)
        {
         pair<ll,ll>pi2=*it;
         ans+=pi2.second/pi2.first;
         ll u=pi2.second/pi2.first;
         ll extra=pi2.second-(pi2.first*u);
         it++;
         if(it!=ma.end())
         {
             pair<ll,ll>pi3=*it;
             ma[pi3.first]+=extra;

         }
         it--;

         

        }
        cout<<ans<<endl;
       
    }
    


  }



   
      
    
        

