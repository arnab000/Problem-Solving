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
ll b=0,c=0,s=0;
ll bm,cm,sm;
ll inb,ins,inc;
ll my_money;
bool solve(ll  x)
{
    ll sura_money=my_money;
    bool hbe=true;
    ll nb=(x*b);
    ll nc=(x*c);
    ll ns=(x*s);
    nb-=inb;
    nc-=inc;
    ns-=ins;
   
    if(nb >0)
    {
      ll cur=nb*bm;
      if(cur>sura_money)
      hbe=false;
      else
      sura_money-=cur;

    }

    if(ns >0)
    {
      ll cur=ns*sm;
      if(cur>sura_money)
      hbe=false;
      else
      sura_money-=cur;

    }

    if(nc >0)
    {
      ll cur=nc*cm;
      if(cur>sura_money)
      hbe=false;
      else
      sura_money-=cur;

    }
    return hbe;
}



int main()
{
 
 string s1;
 cin>>s1;
 for(ll i=0;i<s1.size();i++)
 {
     if(s1[i]=='B')
     b++;
     else if(s1[i]=='S')
     s++;
     else
     {
       c++;
     }
     

 }
 cin>>inb>>ins>>inc;
 cin>>bm>>sm>>cm;
 cin>>my_money;
 ll l=0,r=10000000000000;
ll ans=0;
while(r>=l)
{
    ll mid=(l+r)/2;
    if(solve(mid))
    {
        ans=mid;
        l=mid+1;
    }
    else
    r=mid-1;
}
cout<<ans<<endl;

}



   
      
    
        

