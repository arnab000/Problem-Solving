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
    
string  s;
cin>>s;
ll n=s.size();
ll arr[n+1];
prefix_function(s,arr);
vector<ll>sura;
for(ll i=0;i<n-1;i++)
{
    sura.push_back(arr[i]);
}
sort(sura.begin(),sura.end());
ll border=n;
while(1)
{
    border=arr[border-1];
    if(border==0)
    break;
    auto it=lower_bound(sura.begin(),sura.end(),border);
    if(it!=sura.end() && *it==border)
    {
        for(ll i=0;i<border;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        return 0;
    }


}
cout<<"Just a legend"<<endl;


  }



   
      
    
        

