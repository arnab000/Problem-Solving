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
 
 
int main()
{
  ll arr[25]={0};
  ll n;
  cin>>n;
 vector<ll>ans(n+1,0);
 for(ll i=0;i<n;i++)
 {
     ll k;
     cin>>k;
     ll u=0;
     while(k)
     {
         if(k%2)
         arr[u]++;
         k/=2;
         u++;
         //cout<<u<<endl;

     }

 }
 for(ll i=0;i<25;i++)
 {
   
     for( ll j=0;j<arr[i];j++)
     {
         ans[j]+=po(2,i);

     }
 }
 ll out=0;
 for(ll i=0;i<n;i++)
 {
     
   out+=(ans[i]*ans[i]);
 }
 cout<<out<<endl;


 
}
 
 