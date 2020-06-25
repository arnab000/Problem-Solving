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
       ll curr=0;
        ll b=0;
       ll ans=0;
       for(ll i=0;i<s.size();i++)
       {
           if(s[i]=='-')
           {
               curr--;
           }
           if(s[i]=='+')
           curr++;
           if(curr<0)
           { 
               if(b>curr){

             ans+=(i+1);
             b=curr;
             //cout<<ans<<endl;
           }
           }
       }
       ans+=s.size();
       cout<<ans<<endl;
    }
    


  }



   
      
    
        

