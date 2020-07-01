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
     ll n,k;
     cin>>n>>k;
     ll sura[n+1][n+1];
     for(ll i=0;i<n;i++)
     {
         for(ll j=0;j<n;j++)
         {
            sura[i][j]=0;
         }
     }
     if(k%n==0)
     {
         cout<<0<<endl;
         ll ans=(k/n);
         for(ll i=0;i<n;i++){
            ll h=0;
             for(ll j=i;h<ans;j++){
                sura[i][j%n]=1;
                h++;
             }
         }
     }
     else
     {
         cout<<2<<endl;
          ll ans=(k/n);
         for(ll i=0;i<n;i++){
            ll h=0;
             for(ll j=i;h<ans;j++){
                sura[i][j%n]=1;
                h++;
             }
         }
         for(ll i=0;i<k%n;i++)
         {
              ll h=0;
             for(ll j=i;h<n;j++)
             {
                  h++;
                 if(sura[i][j%n]==0)
                 {
                     sura[i][j%n]=1;
                     break;
                 }
             }
         }
     }
     for(ll i=0;i<n;i++)
     {
         for(ll j=0;j<n;j++)
         {
             cout<<sura[i][j];
         }
         cout<<endl;
     }
     

 }


}



   
      
    
        

