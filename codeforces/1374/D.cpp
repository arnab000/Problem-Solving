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
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
     ll n,k;
     cin>>n>>k;
     ll ans=0;
     vector<ll>sura;
     for(ll i=0;i<n;i++)
     {
        ll d,x;
        cin>>d;
        if(d%k!=0 )
        {
            if(d<k)
            x=k;
            else
            {
                x=((d/k)+1)*k;
            }
            sura.push_back(x-d);
        }
        
        

     }
     if(sura.empty())
     {cout<<0<<endl;
     continue;}
     sort(sura.rbegin(),sura.rend());
    
     for(ll i=0;i<sura.size()-1;i++)
     {
         ll y=k;
         while(sura[i]==sura[i+1] && i<sura.size()-1 )
         {
           sura[i]+=y;
           i++;
           y+=k;
         }

     }
     sort(sura.begin(),sura.end());
     ll u=0;ans=0;
     for(ll i=0;i<sura.size();i++)
     {
        // cout<<sura[i]<<" ";
        if(u<sura[i])
        {
            ans+=(sura[i]-u);
            u+=(sura[i]-u);
            u++;
            ans++;
        }
        if(u==sura[i])
        {
            ans++;
            u++;
        }
     }
    // cout<<endl;

     cout<<ans<<endl;

 }


}



   
      
    
        

