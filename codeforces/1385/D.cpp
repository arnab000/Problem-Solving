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

 string s;
 ll u=0;
 ll solve(ll l, ll r, char a)
 {
     //cout<<l<<" "<<r<<endl;
    
    
     if(l==r && s[l]==a)
     return 0;
     if(l==r && s[l]!=a)
     return 1;
    ll sz=(r-l)/2;
    ll ans1=0,ans2=0;
    for(ll i=l;i<=l+sz;i++)
    {
        if(s[i]!=a)
        ans1++;
    }
    for(ll i=l+sz+1;i<=r;i++)
    {
        if(s[i]!=a)
        ans2++;
    }
    a++;
  //  cout<<a<<endl;
    return min(ans1+solve(l+sz+1,r,a),ans2+solve(l,l+sz,a));
 }


int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
    
     cin>>s;
     char a='a';
     cout<<solve(0,n-1,a)<<endl;
   
     

 }


}



   
      
    
        

