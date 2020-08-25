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




ll solve(ll a[],ll n)
{
    //cout<<n<<" "<<ans<<endl;
    if(n==1 && a[0]>0)
    return 1;
    if(n==1 && a[0]==0)
    return 0;

    ll mn=10000000000;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
       
        mn=min(mn,a[i]);
    }
    ll ar[n+1];
    
        for(ll i=0;i<n;i++)
        {
             a[i]-=mn;
              // cout<<arr[i]<<" ";
        }
         
         ans+=mn;
          ll u=0;
         for(ll i=0;i<n;i++)
         {
            // cout<<arr[i]<<" ";
             if(a[i]!=0)
             {
                 ar[u]=a[i];
                 u++;
             }
             else if(a[i]==0 && u!=0)
             {
                ans+= solve(ar,u);
                 u=0;
             }

         }
         if(u!=0)
         {
             ans+=solve(ar,u);
         }
        
       return(min(ans,n));
    
   
}
int main()
{
    Fast
    ll n;
    cin>>n;
    ll arr[n+1];

    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< solve(arr,n)<<endl;
   
}
    
 

 
 
 
   
      