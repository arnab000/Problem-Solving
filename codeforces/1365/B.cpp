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
       ll n;
       cin>>n;
       vector<ll>sura,mura;
       set<ll>ss;
       for(ll i=0;i<n;i++)
       {
           ll k;
           cin>>k;
           sura.push_back(k);
           mura.push_back(k);
       }
       for(ll i=0;i<n;i++)
       {
           ll k;
           cin>>k;
           ss.insert(k);
       }
       if(ss.size()==2)
       {
           cout<<"YES"<<endl;
           continue;
       }
       bool hbe=true;
       if(ss.size()==1)
       {
           sort(mura.begin(),mura.end());
           for(ll i=0;i<n;i++)
           {
               if(sura[i]!=mura[i])
               hbe=false;
           }
       }
       if(hbe)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

    }
    


  }



   
      
    
        

