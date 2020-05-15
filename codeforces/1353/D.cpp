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
 

int main()
{
    ll test;
    cin>>test;
    
  priority_queue<pi,vector<pi>,Compare>sura;
  while(test--)
  {
      ll n;
      cin>>n;
      sura.push({n,{0,n-1}});
      ll ans[n+1];
      for(ll i=0;i<n;i++)
      {
          pi ma=sura.top();
          sura.pop();
          ll l=ma.s.f;
          ll r=ma.s.s;
          ll mid=(((l+r))/2);
         // cout<<l<<" "<<r<<endl;
          //cout<<mid<<endl;
          ans[mid]=i+1;
          sura.push({(mid-1)-l+1,{l,mid-1}});
          sura.push({r-(mid+1)+1,{mid+1,r}});

      }
    for(ll i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;


  }



   
      
    
        

}