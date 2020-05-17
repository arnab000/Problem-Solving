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
       string s;
       cin>>s;
       vector<ll>one;
       vector<ll>two;
       vector<ll>three;
       set<char>sura;
       for(ll i=0;i<s.size();i++)
       {
          
           sura.insert(s[i]);

       }
       if(sura.size()<3)
       {
           cout<<0<<endl;
           continue;
       }
       ll ans=100000000000;
       for(ll i=0;i<s.size()-1;i++)
       {
            
         if(s[i]!=s[i+1])
         {
             if(s[i]=='1' && s[i+1]=='2')
             {
                 if(!three.empty())
                 {
                    ans=min(ans,(i+1-(three[three.size()-1])+1));
                 }
             }
             if(s[i]=='2' && s[i+1]=='1')
             {
                 if(!three.empty())
                 {
                    ans=min(ans,(i+1-(three[three.size()-1])+1));
                 }
             }
             if(s[i]=='3' && s[i+1]=='2')
             {
                 if(!one.empty())
                 {
                    ans=min(ans,(i+1-(one[one.size()-1])+1));
                 }
             }
             if(s[i]=='2' && s[i+1]=='3')
             {
                 if(!one.empty())
                 {
                    ans=min(ans,(i+1-(one[one.size()-1])+1));
                 }
             }
              if(s[i]=='3' && s[i+1]=='1')
             {
                 if(!two.empty())
                 {
                    ans=min(ans,(i+1-(two[two.size()-1])+1));
                 }
             }
             if(s[i]=='1' && s[i+1]=='3')
             {
                 if(!two.empty())
                 {
                    ans=min(ans,(i+1-(two[two.size()-1])+1));
                 }
             }
         }
          if(s[i]=='1')
           one.push_back(i);
           else if(s[i]=='2')
           two.push_back(i);
           else if(s[i]=='3')
           three.push_back(i);

       }
       cout<<ans<<endl;

    }
    


  }



   
      
    
        

