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
        ll n,k;
        vector<ll>sura;
        cin>>n>>k;
        ll sum=0, odd=0,even=0;
        for(ll i=0;i<n;i++)
        {
            ll u;
            cin>>u;
            if(u%2==0)
            even++;
            else
            odd++;
            sum+=u;
        }
        if(odd==0)
        {
            cout<<"No"<<endl;
        }
        else if(even==0 && k%2==0)
        {
          cout<<"No"<<endl;
        }
        else if(n==k && sum%2==0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        } 
    }
    


  }



   
      
    
        

