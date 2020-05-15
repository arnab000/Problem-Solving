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
     string s1,s2;
     ll arr[27]={0},arr2[27]={0};
     cin>>s1>>s2;
     for(ll i=0;i<s1.size();i++)
     {
         arr[s1[i]-'a']++;
     }
      for(ll i=0;i<s2.size();i++)
     {
         arr2[s2[i]-'a']++;
     }
     bool hbe=false;
     for(ll i=0;i<=26;i++)
     {
         if(arr[i]>0 && arr2[i]>0)
         {
             hbe=true;
             break;
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



   
      
    
        

