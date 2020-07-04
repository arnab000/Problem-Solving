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
     map<ll,ll>ma;
     ll arr[n+1];
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
        arr[i]=k;
         ma[k]=i;
     }
     //making the first smallest
     ll x=arr[0];
     bool hbe=true;
     map<ll,bool>sura;
     for(ll i=1;i<x;i++)
     {
        if(ma[i]==n-1)
        hbe=false;
        

     }
   if(hbe)
   {
       //cout<<"haha"<<endl;
       cout<<"YES"<<endl;
       continue;
   }
   hbe=true;
   map<ll,bool>sura2;
x=arr[n-1];
   for(ll i=x+1;i<=n;i++)
     {
       if(ma[i]==0)
       hbe=false;

     }
     if(hbe)
     {
          cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
     

 }


}



   
      
    
        

