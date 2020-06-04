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
        ll sum=0;
        if(n%2)
        sum+=(n/2)+1;
        else
        sum+=(n/2);
        ll jog=2;
        for(ll shit=2;shit<=n;shit*=2)
        {
            sum+=jog;
            jog++;
        }
        //cout<<sum<<endl;
        ll extra=2;
        for(ll shit=4;shit<=n;shit*=2)
        {
            sum+=(((n-(shit/2))/(shit))*extra);
            extra++;
        }
        cout<<sum<<endl;
    }
    


  }



   
      
    
        

