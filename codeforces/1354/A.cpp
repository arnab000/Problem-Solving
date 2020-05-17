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
       ll a,b,c,d;
       vector<ll>sura;
       cin>>a>>b>>c>>d;
       ll ans=b;
       if(ans>=a)
       {
           cout<<ans<<endl;
           continue;
       }
       ll extra=a-ans;
       if(d>=c)
       {
           cout<<-1<<endl;
           continue;
       }
       ll fac=c-d;
       ll ghum=ceil(extra*1.0/fac);
       cout<<b+ghum*c<<endl;
       

    }
    


  }



   
      
    
        

