

#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define ll int
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<ll , pair<ll, ll> > pi;

 ll sumdiv[10000002];
ll cnt[10000002];
int main()
{
    Fast
 ll test;
 cin>>test;

for (ll i = 1; i <= 10000000; ++i)
 for (ll j = i; j <= 10000000; j += i)
  sumdiv[j] += i;
  
   for(ll i=1;i<=10000000;i++)
  {
      if(sumdiv[i]>10000000)
      continue;
      if(!cnt[sumdiv[i]])
  cnt[sumdiv[i]]=i;
  }

 while(test--)
 {
     ll n;
     cin>>n;
    ll x=cnt[n];
    if(x==0)
    {
        cout<<-1<<'\n';
    }
    else
    cout<<cnt[n]<<'\n';

 }


}



   
      
    
        

