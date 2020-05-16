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
ll max_dig(ll p)
{
    ll mx=-1;
    while(p)
    {
        mx=max(mx,p%10);
        p/=10;
    }
    return mx;
}
ll min_dig(ll p)
{
    ll mn=1000000000000;
    while(p)
    {
        mn=min(mn,p%10);
        p/=10;
    }
    return mn;
}
 

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,k;
        vector<ll>sura;
        cin>>n>>k;
        k--;
        while(k--)
        {
            n+=max_dig(n)*min_dig(n);
            if(min_dig(n)==0)
            break;
        }
        cout<<n<<endl;
    }
    


  }



   
      
    
        

