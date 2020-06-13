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
 
 vector<ll>adj[100001];
int main()
{
   ll test;
   cin>>test;
   while(test--)
   {
       ll n,x;
       cin>>n>>x;
       ll ans=-1;
       vector<ll>sura;
       ll sum=0;
       for(ll i=0;i<n;i++)
       {
           ll k;
           cin>>k;
           sura.push_back(k);
           sum+=k;
            if(sum%x)
            ans=max(ans,i+1);



       }
       ll j=0;
       sum=0;
        for(ll i=n-1;i>=0;i--)
       {
           
        sum+=sura[i];
        if(sum%x)
            ans=max(ans,j+1);
            j++;


       }
       cout<<ans<<endl;
   }
 
 
  }
 