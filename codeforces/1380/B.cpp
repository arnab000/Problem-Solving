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
   string s,s1;
   cin>>s;
   ll su=0,r=0,p=0;
   for(ll i=0;i<s.size();i++)
   {
       if(s[i]=='R')
     r++;
       else if(s[i]=='P')
      p++;
       else
       {
           su++;
       }
       
   }
   ll mx=max(r,max(su,p));
   if(mx==su)
   {
       for(ll i=0;i<s.size();i++)
       {
           cout<<'R';
       }
   }
   else if(mx==p)
   {
        for(ll i=0;i<s.size();i++)
       {
           cout<<'S';
       }
   }
   else
   {
        for(ll i=0;i<s.size();i++)
       {
           cout<<'P';
       }
   }
   cout<<endl;


 }


}



   
      
    
        

