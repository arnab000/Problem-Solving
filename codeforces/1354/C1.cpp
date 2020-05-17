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
   long double n,k;
   std::cout << std::fixed;
    std::cout << std::setprecision(9);
    ll test;
    cin>>test;
    long double PI=3.1415926535;
    while(test--){
   long double n,k;
  cin>>n;
 k=tan(PI/(2.0*n));
  cout<<(1.00 / k) <<endl;
    }

  }



   
      
    
        

