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



int main()
{
 
ll n;
cin>>n;
ll left[n+5],right[n+5],dp[n+5],arr[n+5];
for(ll i=0;i<=n;i++)
{
    dp[i]=0;
}
stack<ll>s1,s2;
for(ll i=1;i<=n;i++)
{
    cin>>arr[i];
}
for(ll i=1;i<=n;i++)
{
    while(!s1.empty()&& arr[i]<=arr[s1.top()])
    {
        s1.pop();
    }
    if(s1.empty())
    left[i]=0;
    else
    left[i]=s1.top();
    s1.push(i);

}

for(ll i=n;i>=1;i--)
{
    while(!s2.empty()&& arr[i]<=arr[s2.top()])
    {
        s2.pop();
    }
    if(s2.empty())
    right[i]=n+1;
    else
    right[i]=s2.top();
    s2.push(i);

}


for(ll i=1;i<=n;i++)
{
    ll len=right[i]-left[i]-1;
    
    dp[len]=max(dp[len],arr[i]);
}

for(ll i=n-1;i>=1;i--)
{
    dp[i]=max(dp[i],dp[i+1]);
}
for(ll i=1;i<=n;i++)
{
    cout<<dp[i]<<" ";
}
cout<<endl;

}



   
      
    
        

