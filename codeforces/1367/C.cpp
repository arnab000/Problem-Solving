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
     string s;
     cin>>s;
     ll right[n+1];
     ll rinf=1000000000;
     for(ll i=n-1;i>=0;i--)
     {
         right[i]=rinf;
         if(s[i]=='1')
         {
           rinf=i;
         }
     }
     ll linf=-1000000000;
     ll ans=0;
     for(ll i=0;i<n;i++)
     {
       if(s[i]=='0' && i-k>linf && i+k<right[i]){
           ans++;
           linf=i;
       }
       if(s[i]=='1')
       {
           linf=i;
       }
     }
     cout<<ans<<endl;

      
    }
    


  }



   
      
    
        

