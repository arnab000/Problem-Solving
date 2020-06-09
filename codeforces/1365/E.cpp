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
    ll n;
    cin>>n;
    vector<ll>sura;
    for(ll i=0;i<n;i++)
    {
       ll k;
       cin>>k;
       sura.push_back(k);
    }
    ll ans=-1;
    if(n==1)
    ans=sura[0];
    else if(n==2)
    ans=sura[0]|sura[1];
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            for(ll u=j+1;u<n;u++)
            {
                ans=max(ans,(sura[i]|sura[j]|sura[u]));
            }
        }
       
    }
 cout<<ans<<endl;

  }



   
      
    
        

