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
    Fast
   ll n,k;
   cin>>n>>k;
   vector<ll>both,one,two;
   for(ll i=0;i<n;i++)
   {
       ll t,u,v;
       cin>>t>>u>>v;
       if(u==1 && v==1)
       both.push_back(t);
       else if(u==1)
       one.push_back(t);
       else if(v==1)
       two.push_back(t);
   }
   sort(one.begin(),one.end());
   sort(two.begin(),two.end());
   for(ll i=0;i<min(one.size(),two.size());i++)
   {
       both.push_back(one[i]+two[i]);
   }
   if(both.size()<k)
   cout<<-1<<endl;
   else
   {
       sort(both.begin(),both.end());
       ll ans=0;
       for(ll i=0;i<k;i++)
       {
           ans+=both[i];
       }
       cout<<ans<<endl;
   }
   


}



   
      
    
        

