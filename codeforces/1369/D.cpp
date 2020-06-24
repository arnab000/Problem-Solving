#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
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
 #define INF 1000000000
    const int mod = INF+7;
    const int maxn = 2000010;
    ll dp[maxn];
     

int main()
{
    Fast
     

   
     
      int test;
      cin>>test;
     
      memset(dp, 0, sizeof(dp));
     
      dp[3] = 4;
      for(int i=4; i<maxn; i++){
        dp[i] = max((dp[i-1]+2*dp[i-2])%mod, (4+4*dp[i-4]+4*dp[i-3]+dp[i-2])%mod);
        dp[i]%=mod;
      }
     
      while(test--){
        int n;
        cin>>n;
     
        cout<<(dp[n])%mod<<"\n";
      }
     
    
 
}
 
 
 
   
      