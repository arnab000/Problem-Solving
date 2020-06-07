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
   
   Fast
   ll n;
   cin>>n;
  map<ll,ll>aa;
       map<ll,ll>bb;
vector<ll>ans;
       for(ll i=0;i<n;i++)
       {
         ll k;
         cin>>k;
         aa[k]=i+1;
       } 
   for(ll i=0;i<n;i++)
       {
         ll k;
         cin>>k;
         bb[k]=i+1;
       } 
       for(ll i=1;i<=n;i++)
       {
          if(bb[i]<=aa[i])
          {
              ans.push_back(aa[i]-bb[i]);
          }
          else
          {
              ans.push_back(aa[i]+n-bb[i]);
          }
          
       }
       sort(ans.begin(),ans.end());
       ll tt=1;
       for(ll i=1;i<n;i++)
       {
           ll mm=1;
           while(ans[i-1]==ans[i])
           {
               i++;
               mm++;
           }
           tt=max(tt,mm);
       }
       cout<<tt<<endl;




    

}



   
      
    
        

