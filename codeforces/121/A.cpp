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
 ll string_to_num(string s){
     ll u=1;
     ll ans=0;
     for(ll i=s.size()-1;i>=0;i--){
         ans+=((s[i]-'0')*u);
         u*=10;
     }
     return ans;
 }

int main()
{
  set<string>sura;
  for(ll i=1;i<=10;i++)
  {
      string luck;
      for(ll j=1;j<=i;j++)
      {
          luck+='4';
          for(ll k=1;j+k<=i;k++)
          {
              luck+='7';
          }
          do{
              //cout<<luck<<endl;
              sura.insert(luck);
          }while (next_permutation(luck.begin(),luck.end()));
          luck.clear();
            for(ll k=1;k<=j;k++)
          {
              luck+='4';
          }
          
      }
      string fuck;
      for(ll j=1;j<=i;j++)
      {
          fuck+='7';
      }
        sura.insert(fuck);

  }
   set< ll >mura;
  for (auto i = sura.begin(); i != sura.end(); i++)
  {
      mura.insert(string_to_num(*i) );
     
  }
  ll l,r;
  cin>>l>>r;
  auto it=mura.lower_bound(l);
  ll sum=0;
  //cout<<*it<<endl;
 for(;it!=mura.end();it++)
 {
     ll ma=*it;
    if(r<=ma)
    {
        sum+=(r-l+1)*(ma);
        break;
    }
    else
    {
         sum+=(ma-l+1)*(ma);
         l=ma+1;
    }
    
 }
 cout<<sum<<endl;

  


  }



   
      
    
        

