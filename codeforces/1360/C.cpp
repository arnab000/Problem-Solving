
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
        vector<ll>sura;
       ll odd=0,even=0;

        for(ll i=0;i<n;i++)
        {
            ll k;
            cin>>k;
            if(k%2==0)
            even++;
            else
            {
                odd++;
            }
            sura.push_back(k);

        }
        if(odd%2==0 && even%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(sura.begin(),sura.end());
       bool hbe=false;
        for(ll i=1;i<n;i++)
        {
          if(sura[i]-sura[i-1]==1)
          hbe=true;
        }
        if(hbe)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
      
   
    }
    


  }



   
      
    
        

