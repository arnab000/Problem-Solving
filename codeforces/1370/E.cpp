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
   ll n;
   cin>>n;
   string s,t;
   cin>>s>>t;
   vector<char>sura;
 ll sum=0;
 if(s==t)
{
    cout<<0<<endl;
    return 0;
}
for(ll i=0;i<n;i++)
{
    if(s[i]!=t[i])
    {
        if(s[i]=='0')
        {
            sum+=(-1);
            sura.push_back(s[i]);


        }
        else
        {
            sum+=1;
           
            sura.push_back(s[i]);

        }
        
    }
}

if(sum!=0)
{
    cout<<-1<<endl;
    return 0;
}
ll ans=0,ans1=0;
ll cou=0;
for(ll i=0;i<sura.size();i++)
{
    if(sura[i]=='1')
    cou++;
    else
    cou--;
    ans=max(ans,cou);
    ans1=max(ans1,-cou);
}


cout<<ans+ans1<<endl;
  }



   /*0100101111101010001000010111110010101010110011101010101110001100000010010000111100000111100010011111011001111

*/
      
    
        

