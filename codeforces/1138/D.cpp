
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
   
          string s,t;
          cin>>s>>t;
          ll one1=0,zero1=0,one2=0,zero2=0;
          for(ll i=0;i<s.size();i++)
          {
              if(s[i]=='1')
              one1++;
              else
              zero1++;
          }
          for(ll i=0;i<t.size();i++)
          {
              if(t[i]=='1')
              one2++;
              else
              zero2++;
          }
          if(s.size()<t.size() || (one1<one2 || zero1<zero2))
          {
              cout<<s<<endl;
              return 0;
          }

         ll n=t.size();
         ll arr[n+1];
         prefix_function(t,arr);
         one1-=one2;
         zero1-=zero2;
         cout<<t;
         ll i=arr[n-1];
         while(one1>0 && zero1>0)
         {
             for(i=arr[n-1];i<t.size();i++)
             {
                 if(t[i]=='1' && one1>0)
                 {
                     cout<<t[i];
                     one1--;
                 }
                 
                 else if(t[i]=='0' && zero1>0)
                 {
                     cout<<t[i];
                     zero1--;
                 }
                 if(one1<=0 || zero1<=0)
                 break;

             }
         }
         for(ll u=0;u<one1;u++)
         {
             cout<<'1';
         }
          for(ll u=0;u<zero1;u++)
         {
             cout<<'0';
         }

     cout<<endl;

    
    


}



   
      
    
        

