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
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
    ll ans1,ans2;
    ll mn=10000000000;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll p=n/i;
            ll d1=n-i;
            ll d2=n-p;
            if(max(p,d2)<mn)
            {
                ans1=p;
                ans2=d2;
                mn=max(p,d2);
            }
            if(max(i,d1)<mn)
            {
                ans1=i;
                ans2=d1;
                mn=max(i,d1);
            }

        }
    }
    cout<<ans1<<" "<<ans2<<endl;

 }


}



   
      
    
        

