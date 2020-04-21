#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )
 
 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,ans=INT_MIN,dp[2*(1009)][2*100];
vector<ll>v ;
 
 
int main()
{
  // freopen("input.txt", "r+", stdin);
  // freopen("output.txt", "w+", stdout);
 
     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    
    cin>>t;
    while(t--){
 
          cin>>n;
          v.clear();
          ans=0;
          ll mn=INT_MIN,mx=INT_MAX;
          for(int i=0; i<n; i++){
 
            cin>>x;
            if(!i){v.pb(x) ; mn=x; mx=x; continue;  }
            if(signbit(x)!=signbit(v.back() )){
                  
                 //// cout<<" COL "<<i<<endl;
                  if(signbit(v.back())==-1) ans+=mn;
                  else ans+=mx;
                  mn=x; mx=x;
                   v.clear();
            }
            v.pb(x);
            mn=min(mn,x);
            mx=max(mx,x);
          }
          if(signbit(v.back())==-1) ans+=mn;
           else ans+=mx;
          cout<<ans<<endl;
          
    }
 
  return 0;
}
 
 