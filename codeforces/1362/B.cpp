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
      ll n, ans = -1;
  cin >> n;
  vector<int> sura(n);
  vector<bool> ma(4096, false);
  

  for (ll i = 0; i < n; i++) {
    cin >> sura[i];
    ma[sura[i]] = true;
  }

  for (ll j = 1; j <= 2048; ++j) {
    ll c = 0;
for (ll ku=0;ku<n;ku++) {
      if (ma[sura[ku] ^ j]) 
      c++;
      else break;
    }

if (c == n) {
      ans = j;
      break;
    }
  }

  cout << ans << endl;
    }
    


  }



   
      
    
        

