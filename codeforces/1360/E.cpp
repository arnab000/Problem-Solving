
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
        char bull[n+3][n+3];
        for(ll i=0;i<n;i++)
        {
            
          
            for(ll j=0;j<n;j++)
            {
                
              cin>>bull[i][j];
                  
                  
            }
        }
        
        bool hbe=true;
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=0;j<n-1;j++)
            {
                if(bull[i][j]=='1' && bull[i][j+1]=='0' && bull[i+1][j]=='0' )
                hbe=false;
            }
        }
        if(hbe)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        


    }
    


}



   
      
    
        

