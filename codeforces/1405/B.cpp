/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
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
     long long border=0; arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
        border=arr[border-1];
     
     if(s[i]==s[border])
         border++;
      else
       border=0;
      
      arr[i]=border;
    }
}//send mod-2 for a^-1 if mod is a prime number

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
ll subs(ll a,ll b)
{
    return (((a%mod)-(b%mod)+mod)%mod);
}



int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
     vector<ll>sura;
     ll rem=0;
     ll ans=0;
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         if(k<0)
         {
             rem-=abs(k);
             if(rem<0)
            {
             ans+=abs(rem);
             rem=0;
            }

         }
         else
         {
             rem+=k;
         }
         
         

     }
     cout<<ans<<endl;

 }


}



   
      
    
        

