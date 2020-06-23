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
ll n,m,k;

ll solve(ll x)
{
ll himself=0,other=0;
for(ll i=1;i<=n;i++)
{
    ll u=(x/i);
    if(u>m)
    other+=m;
    else
    {
        if(x%i==0)
         {
             other+=(u-1);
             himself++;
         }
         else
         other+=u;
    }
    
}
if(k>=other+1 && k<=other+himself)
{
    cout<<x<<endl;
    exit(0);
}
return(other+himself);
}
int main()
{
    Fast
    cin>>n>>m>>k;
    ll l=0,r=n*m+1;
     while (r>=l)
     {
         ll mid=(l+r)/2;
        
         if(solve(mid)>=k)
         r=mid-1;
         else
         {
             l=mid+1;
         }
         

     }
     
    
 
}
 
 
 
   
      