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
      ll x,y,n;
      cin>>x>>y>>n;
      ll ans=0;
      while(x<=n && y<=n)
      {
          if(y>x)
          {
              x+=y;
          }
          else
          {
              y+=x;
          }
          ans++;
      }
      cout<<ans<<endl;
 
      
    }
    
 
 
  }
 
 
 
   
      