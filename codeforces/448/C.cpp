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




ll solve(ll arr[],ll n)
{
    //cout<<n<<" "<<ans<<endl;
    if(n==1)
    return 1;
    ll mx=-1;
    ll mn=10000000000;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
       
        mn=min(mn,arr[i]);
    }
    ll ar[n+1];
    
        for(ll i=0;i<n;i++)
        {
             arr[i]-=mn;
              // cout<<arr[i]<<" ";
        }
         
         ans+=mn;
          ll u=0;
         for(ll i=0;i<n;i++)
         {
            // cout<<arr[i]<<" ";
             if(arr[i]!=0)
             {
                 ar[u]=arr[i];
                 u++;
             }
             else if(arr[i]==0 && u!=0)
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
    
 

 
 
 
   
      