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
  ll n;
  cin>>n;
  priority_queue<ll,vector<ll>,greater<ll> >pq;
  vector<ll>sura;
  set<ll>s;
  map<ll,bool>ma;
 bool hbe=true;
 ll mx=-1;
  for(ll i=0;i<n;i++)
  {
       ll k;
       cin>>k;
       if(k>i+1)
       hbe=false;
       sura.push_back(k);
       mx=max(mx,k);
       ma[k]=true;
       
       s.insert(k);
  }
  if(!hbe)
  {
      cout<<-1<<endl;
      return 0;
  }
  for(ll i=0;i<=mx;i++)
{
    if(!ma[i])
    {
        pq.push(i);
    }
}
if(s.size()==mx+1)
{
    pq.push(mx+1);
}
set<ll> notun;
vector<ll>ans;
ans.push_back(pq.top());
pq.pop();
notun.insert(sura[0]);
for(ll i=1;i<n;i++)
  {
      ll x=notun.size();
      notun.insert(sura[i]) ;
      if(notun.size()>x)
      {
          pq.push(sura[i-1]);

      }
      if(pq.empty())
      {
          ans.push_back(ans[i-1]);
      }
       if(!pq.empty())
      {
          ans.push_back(pq.top());
          pq.pop();
      }
  }
for(ll i=0;i<n;i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
    


  }



   
      
    
        

