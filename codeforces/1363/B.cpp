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
 

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
       string s;
       cin>>s;
       vector<ll>one,zero;
      ll i,j,k,l;
      ll sum1=0,sum2=0,sum3=0,sum4=0;
      ll n=s.size();
       ll shoja1[n+1],ulta1[n+1],shoja0[n+1],ulta0[n+1];
     for(i=0;i<n;i++)
     {
         if(s[i]=='1')
         {
             sum1++;
         }
         shoja1[i]=sum1;
         if(s[i]=='0')
         {
             sum2++;
         }
         shoja0[i]=sum2;
     }
     for(i=n-1;i>=0;i--)
     {
         if(s[i]=='1')
         {
             sum3++;
         }
         ulta1[i]=sum3;
         if(s[i]=='0')
         {
             sum4++;
         }
         ulta0[i]=sum4;
     }
     ll ans=100000000;
     for(i=0;i<n-1;i++)
     {
         ans=min(ans,shoja0[i]+ulta1[i+1]);
         ans=min(ans,shoja1[i]+ulta0[i+1]);

     }

      cout<<min(min(sum1,sum2),ans)<<endl;

    }
    


  }



   
      
    
        

