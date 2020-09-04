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
//send mod-2 for a^-1 if mod is a prime number
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
ll test;
cin>>test;
while(test--)
{
ll n,m;
cin>>n>>m;
ll x=n;
  ll digit=0,sum=0;
  vector<ll>sura;
   while(x)
   {
       ll y=x%10;
       sura.push_back(y);
     x/=10;
     sum+=y;
     digit++;
    

   }
   reverse(sura.begin(),sura.end());
   ll ans=0;
   ll q=1;
   ll h=0;
   ll k=0;
   for(ll i=0;i<sura.size();i++)
   {
    h+=sura[i];
    if(h<m)
    {
        ans*=q;
        ans+=sura[i];
        q=10;
        k++;
    }
    else
    {
        break;
    }
    
   }
   //cout<<ans<<endl;
   
   if(sum<=m)
   {
      cout<<0<<endl;
       continue;

   }
   ans+=1;
  // cout<<k<<endl;
   ll r=ans;
   for(ll i=0;i<digit-k;i++)
   {
     r*=10;
   }
cout<<r-n<<endl;

}


}



   
      
    
        

