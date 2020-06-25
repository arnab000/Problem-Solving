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
    Fast
    ll test;
    cin>>test;
    while(test--)
    {
       ll n;
       cin>>n;
       ll ans=0;
       vector<ll>sura,mura,kura,dura;

       for(ll i=0;i<n;i++)
       {
          ll k;
          cin>>k;
          sura.push_back(k);
          if(i%2==0)
          ans+=k;
       }
       for(ll i=1;i<n;i+=2)
       {
           dura.push_back(sura[i]-sura[i-1]);
       }
       for(ll i=1;i<n;i+=2)
       {
           if(i+1>=n)
           break;
           kura.push_back(sura[i]-sura[i+1]);
       }
       

       
       ll curr1=0,Best=-1,Ans=-1;
       for(ll i=0;i<kura.size();i++)
       {
             curr1+=kura[i];
             Best=max(curr1,kura[i]);
             Ans=max(Ans,Best);
             curr1=Best;
       }
       ll curr2=0,Best2=-1,Ans2=-1;
       for(ll i=0;i<dura.size();i++)
       {
             curr2+=dura[i];
             Best2=max(curr2,dura[i]);
             Ans2=max(Ans2,Best2);
             curr2=Best2;
       }
       
       Ans=max(Ans,0ll);
       cout<<ans+max(Ans2,Ans)<<endl;

    }
   
}
    
 

 
 
 
   
      