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
void prefix_function( string s,ll arr[] )
{
    
   
    long long border=0;
    arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
      {
          border=arr[border-1];
      }
      if(s[i]==s[border])
      {
          border++;
      }
      else
      {
          border=0;
      }
      arr[i]=border;
      
    }
    

}
ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
ll binpow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b & 1) res = mul(res, a);
		a = mul(a, a);
		b >>= 1;
	}
	return res;
}



int main()
{
    Fast
 ll test;
 cin>>test;
 map<ll,ll>sura;
  map<ll,ll>sura2;
  ll h=test;
 while(h--)
 {
     ll n;
     cin>>n;
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         sura2[k]++;
         sura[k]=add(sura[k],mul(binpow(n,mod-2),binpow(test,mod-2)));


     }

 }
 ll ans=0;
 auto it2=sura.begin();
 for(auto it=sura2.begin();it!=sura2.end();it++)
 {
     ans=add(ans,mul(it2->second,mul(it->second,binpow(test,mod-2))));
     it2++;
 }
cout<<ans<<endl;

}



   
      
    
        

