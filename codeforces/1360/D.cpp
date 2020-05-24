
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
      ll n,k;
      cin>>n>>k;
      ll ans=1000000000000;
      for(ll i=1;i<=sqrt(n);i++)
      {
         if(n%i==0)
         {
             ll y=(n/i);
             if(i<=k)
             ans=min(ans,n/i);
             if(y<=k)
             ans=min(ans,n/y);
         }
      }
     cout<<ans<<endl;

    }
    


  }



   
      
    
        

