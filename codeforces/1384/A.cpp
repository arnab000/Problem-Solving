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
     ll last=-1;
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         sura.push_back(k);
     }
     sura.push_back(-1);
     char a='a';
     string prev;
     for(ll j=0;j<max(sura[0],100ll);j++)
     {
        prev+='a';
        cout<<'a';
     }
     cout<<endl;
     for(ll i=1;i<=n;i++)
     {
         
        // cout<<a<<endl;
               if(sura[i-1]==0)
             {
                 a++;
             if(a>'z')
             a='a';
             string prev1=prev;
             prev.clear();
             for(ll j=0;j<100;j++)
             {
                 prev+=a;
             }
              cout<<prev<<endl;
              continue;
             }
             
           
        
             string prev1=prev;
             prev.clear();
             if(sura[i]>sura[i-1])
             a++;
             if(a>'z')
             a='a';
             for(ll j=0;j<sura[i-1];j++)
             {
                 prev+=prev1[j];
             }
             for(ll j=sura[i-1];j<sura[i];j++)
             {
                 prev+=a;
             }
             cout<<prev<<endl;
            
        


     }

 }


}



   
      
    
        

