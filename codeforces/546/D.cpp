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
ll spf[5000005];
ll MAXN=5000001;
ll ans[5000005];

 

int main()
{
          ios_base::sync_with_stdio(false); cin.tie(NULL);
      for(ll i=2;i<=MAXN;i++)
    {
        if(!ans[i])
        {
            for(ll j=i;j<=MAXN;j+=i)
            {
              ans[j]=ans[j/i]+1;
            }

        }
    }
  
    for(ll i=3;i<=MAXN;i++)
    {
       
        ans[i]+=ans[i-1];
    }
    ll test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<ans[a]-ans[b]<<'\n';
    }
  
}



      
    
        

