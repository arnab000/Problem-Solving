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
     ll n,m;
     cin>>n>>m;
     ll arr[n+1][m+1];
         bool hbe=true;
     for(ll i=0;i<n;i++)
     {
         for(ll j=0;j<m;j++)
         {
             ll k;
             cin>>k;
             arr[i][j]=k;
             if(k>4)
             hbe=false;
         }

     }
  
     if(arr[0][0]>2 || arr[0][m-1]>2 || arr[n-1][0]>2|| arr[n-1][m-1]>2)
     hbe=false;
     for(ll i=1;i<m-1;i++)
     {
         if(arr[0][i]>3)
         hbe=false;
         else
         {
             arr[0][i]=3;
         }
         
         if(arr[n-1][i]>3)
         hbe=false;
         else
         {
            arr[n-1][i]=3;
         }
         
     }
     for(ll i=1;i<n-1;i++)
     {
         if(arr[i][0]>3)
         hbe=false;
         else
         {
            arr[i][0]=3; 
         }
         
         if(arr[i][m-1]>3)
         hbe=false;
         else
         {
             arr[i][m-1]=3;
         }
         
     }
   arr[0][0]=2 ;
    arr[0][m-1]=2 ;
     arr[n-1][0]=2;
      arr[n-1][m-1]=2;
      for(ll i=1;i<n-1;i++)
      {
          for(ll j=1;j<m-1;j++)
          {
              arr[i][j]=4;
          }
      }
     if(!hbe)
     {
         cout<<"NO"<<endl;
     }
     else
     {
         cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)
     {
         
         for(ll j=0;j<m;j++)
         {
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;

     }
     }
     



 }


}



   
      
    
        

