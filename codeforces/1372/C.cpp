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
     string s;
     for(ll i=1;i<=n;i++)
     {
       ll k;
       cin>>k;
       if(k==i)
       s+='*';
       else
       s+='#';

     }
   
  
     ll a=0;
     for(ll i=0;i<s.size();i++)
     {
       if(s[i]=='#')
       {
           a++;
           while(s[i]==s[i+1] && i<s.size()-1)
           {
               i++;
           }
       }
     }
     if(a==0)
     cout<<0<<endl;
     else if(a==1)
     cout<<1<<endl;
     else
     {
         cout<<2<<endl;
     }
     

 }


}



   
      
    
        

