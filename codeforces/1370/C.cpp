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

     ll test;
     cin>>test;
     while(test--)
     {
       ll n;
       cin>>n;
       if(n==1)
       {
           cout<<"FastestFinger"<<endl;
           continue;
       }
       else if(n%2 || n==2)
       {
            cout<<"Ashishgup"<<endl;
            continue;
       }
       if(n%2==0)
       {
           ll g=n/2;
           bool prime=true;
           for(ll i=2;i*i<=g;i++)
           {
              if(g%i==0)
              prime=false;
           }
           while(n%2==0)
           {
               n/=2;
           }
           if(n==1 || prime)
            cout<<"FastestFinger"<<endl;
            else
            {
                cout<<"Ashishgup"<<endl;
            }
            

       }


      

     }

 
}
 
 
 
   
      