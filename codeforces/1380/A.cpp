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
void prefix_function( string s,ll arr[] )
{
    
   
    long long border=0;
    arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
      {
          border=arr[border-1];
      }
      if(s[i]==s[border])
      {
          border++;
      }
      else
      {
          border=0;
      }
      arr[i]=border;
      
    }
    

}



int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
    ll n;
    cin>>n;
    vector<ll>sura;
    for(ll i=0;i<n;i++)
    {
      ll k;
      cin>>k;
      sura.push_back(k);
    } 
    ll a,b,c;
    bool hbe=false,hbe1=false;
    for(ll i=1;i<n-1;i++)
    {
         hbe=false,hbe1=false;
       for(ll j=0;j<i;j++)
       {
           if(sura[j]<sura[i]){
           a=j+1;
           hbe=true;
           break;
           }
       }
       for(ll j=i+1;j<n;j++)
       {
            if(sura[j]<sura[i]){
           b=j+1;
           hbe1=true;
           break;
           }
           
       }
       if(hbe && hbe1)
       {
           c=i+1;
           break;
       }
    }
    if(hbe && hbe1){
        cout<<"Yes"<<endl;
    cout<<a<<" "<<c<<" "<<b<<endl;
    }
    else
    cout<<"No"<<endl;

 }


}



   
      
    
        

