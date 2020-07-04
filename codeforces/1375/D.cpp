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



ll mex(ll arr[],ll n)
{
    ll ans[1001]={0};
    for(ll i=0;i<n;i++)
    {
        ans[arr[i]]=1;
    }
    for(ll i=0;i<=1000;i++)
    {
        if(!ans[i])
        {
            return i;
        }
    }
    

}
bool ok(ll n ,ll arr[])
{
    for(ll i=0;i<n-1;i++)
    {

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
     ll arr[n+1];
     set<ll>s;
     for(ll i=0;i<n;i++)
     {
         cin>>arr[i];
         if(arr[i]!=i)
         s.insert(i);

     }
     vector<ll>sura;
     while(!s.empty())
     {
         ll x=mex(arr,n);

         if(x>=n)
         {
             auto it=s.begin();
             arr[*it]=x;
             sura.push_back(*it+1);
         }
         else
         {
            arr[x]=x;
            s.erase(x);
            sura.push_back(x+1);
         }
         


     }
     cout<<sura.size()<<endl;
     for(ll i=0;i<sura.size();i++)
     {
         cout<<sura[i]<<" ";
     }
     cout<<endl;
    



 }


}



   
      
    
        

