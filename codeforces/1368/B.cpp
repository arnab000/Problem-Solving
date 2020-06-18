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
  vector<ll>sura(10,1);
  string s="codeforces";
if(n==1){
    cout<<s<<endl;
    return 0;

}
ll u=0;
while (1)
{
    sura[u%10]++;
    u++;
    ll g=1;
    for(ll i=0;i<10;i++)
    {
        g*=sura[i];
    }
    if(g>=n)
    break;

}
for(ll i=0;i<10;i++)
{
    for(ll j=0;j<sura[i];j++)
    {
        cout<<s[i];
    }
}
cout<<endl;

 
}
 
 
 
   
      