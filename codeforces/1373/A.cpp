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
        ll n,m,k;
        cin>>n>>m>>k;
        if(n>=k)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<1<<" ";
        }
        if(n*m<=k)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
        

       

    }
   
}
    
 

 
 
 
   
      