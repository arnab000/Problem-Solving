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
     string a,b;
     cin>>a>>b;
     vector<ll>sura,ans;
    
    a+='0';
      for(ll i=0;i<n;i++)
      {
          if(a[i]!=a[i+1])
          ans.push_back(i+1);
      }
      ll p=0;
       for(ll i=n-1;i>=0;i--)
      {
          char a1=a[i];
          if(p%2==0)
            a1='0';
            else
            a1='1';
          if(a1!=b[i]){
          ans.push_back(i+1);
          p++;
          }
      }
      

     cout<<ans.size()<<" ";
     for(ll i=0;i<ans.size();i++)
     {
         cout<<ans[i]<<" ";
     }
     cout<<endl;


 }


}



   
      
    
        

