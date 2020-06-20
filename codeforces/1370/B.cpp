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
 
 
int main()
{

     ll test;
     cin>>test;
     while(test--)
     {
        ll n;
         cin>>n;
         vector<ll>sura;
         vector<ll>odd;
         vector<ll>even;
         for(ll i=1;i<=2*n;i++)
         {
             ll k;
             cin>>k;
             if(k%2==0)
             even.push_back(i);
             else
             odd.push_back(i);
         }
         ll ans=odd.size();
         if(ans%2)
         {
             if(!odd.empty()){
             for(ll i=0;i<odd.size()-1;i+=2)
             {
                 cout<<odd[i]<<" "<<odd[i+1]<<endl;
             }
             }
              if(!even.empty()){
             for(ll i=0;i<even.size()-1;i+=2)
             {
                 cout<<even[i]<<" "<<even[i+1]<<endl;
             }
              }
         }
          else if(ans%2==0)
         {
             if(odd.empty()){
             for(ll i=0;i<even.size()-2;i+=2)
             {
                 cout<<even[i]<<" "<<even[i+1]<<endl;
             }
          
             }
             else if(even.empty()){
                  for(ll i=0;i<odd.size()-2;i+=2)
             {
                 cout<<odd[i]<<" "<<odd[i+1]<<endl;
             }
             
             }
             else
             {
                     for(ll i=0;i<odd.size();i+=2)
             {
                 cout<<odd[i]<<" "<<odd[i+1]<<endl;
             }
              for(ll i=0;i<even.size()-2;i+=2)
             {
                 cout<<even[i]<<" "<<even[i+1]<<endl;
             }
             }


              
         }

     }

 
}
 
 
 
   
      