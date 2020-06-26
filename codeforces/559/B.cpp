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
 string solve(string s)
 {
     if(s.size()%2)
     return s;
     string s1,s2;
     ll mid=s.size()/2;
     s1=solve(s.substr(0,mid));
     s2=solve(s.substr(mid,mid));
     if(s1<s2)
     return s1+s2;
     else
     {
         return s2+s1;
     }
     

 }

int main()
{
   string s,s1;
   cin>>s>>s1;
    s=solve(s);
    s1=solve(s1);
    if(s==s1)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    


  }



   
      
    
        

