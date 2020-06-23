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
      ll n,k;
      cin>>n>>k;
      vector<ll>sura,mura;
      for (ll i = 0; i < n; i++)
      {
          ll d;
          cin>>d;
          sura.push_back(d);
      }
      for(ll i=0;i<k;i++)
      {
          ll d;
          cin>>d;
          mura.push_back(d);
      }
      sort(sura.rbegin(),sura.rend());
      sort(mura.begin(),mura.end());
     ll ans=0;
     ll i;
     for( i=0;i<k;i++)
     {
         ans+=sura[i];
         mura[i]--;
         if(mura[i]==0)
         ans+=sura[i];
     }
     i--;
     if(i==n-1)
     {
         cout<<ans<<endl;
         continue;
     }
     ll j=0;
     while (mura[j]==0)
     {
         j++;
     }
   //  cout<<ans<<endl;

     while(1)
     {
        i+=mura[j];
      if(i>=n)
      break;
        ans+=sura[i];
        j++;
        if(j>=k)
        break;
     }
     cout<<ans<<endl;
   }
     
    
 
}
 
 
 
   
      