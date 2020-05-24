
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
          vector<string>sura;
          ll n,k;
          cin>>n>>k;
          for(ll i=0;i<n;i++){
              string s;
              cin>>s;
              sura.push_back(s);
          }
          bool hbe=false;
          string ans;
          for(ll i=0;i<k;i++)
          {
              char pore=sura[0][i];
              for(char a='a';a<='z';a++)
              {
                  sura[0][i]=a;
                  hbe=true;
                  for(ll j=1;j<n;j++)
                  {  ll bhul=0;
                      for(ll u=0;u<k;u++)
                      {
                          if(sura[0][u]!=sura[j][u])
                          bhul++;

                      }
                      if(bhul>=2)
                      hbe=false;
                      if(!hbe)
                      break;
                  }
                  if(hbe){
                  ans=sura[0];
                  break;
                  }


                  
              }
              if(hbe)
              break;
              sura[0][i]=pore;
          }
          if(hbe)
          cout<<ans<<endl;
          else
          {
              cout<<-1<<endl;
          }
          
        


    }
    


}



   
      
    
        

