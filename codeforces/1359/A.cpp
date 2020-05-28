#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
ll po(ll x,ll y){
     ll  res=1;
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
string multi(string s)
{
    int in_hand=0;
    int input;
    string ans;
    for(ll i=s.size()-1;i>=0;i--){
        int mul=s[i]-'0';
        if(i==0)
        {
            mul*=2;
            mul+=in_hand;
            while (mul)
            {
                ans+=(mul%10)+'0';
                mul/=10;

            }
            break;
            
        }
        mul*=2;
       
        if(mul<10)
        {
            mul+=in_hand;
            ans+=mul+'0';
            in_hand=0;
        }
        else
        {
            mul+=in_hand;
            int y=mul%10;
          
            ans+=(y+'0');
            in_hand=1;


        }
     
        
        


    }
    reverse(ans.begin(),ans.end());
    
    return ans;


}
int main(){
 ll test;
 cin>>test;
while(test--)
{
  ll n,m,k;
  cin>>n>>m>>k;
  ll play;
  ll palin=0;

  if(n/k>m){
  play=m;
  

  }
  else
  {
      play=n/k;
  }
  
k--;
  ll extra=m-play;

ll la=ceil(extra*1.00/k);
cout<<play-la<<endl;

}



}


   
      
    
        

