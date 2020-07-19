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

ll baad[51];

int main()
{
    Fast
 ll test;
 cin>>test;
 string NEED="abacaba";
 while(test--)
 {
       int n;
    string s;
    cin>>n>>s;
    bool hbe=false;
    for(int i=0;i<=n-7;i++)
    {
        string t=s;
        bool ok=true;
        for(int j=0;j<7;j++)
            if(t[i+j]==NEED[j]||t[i+j]=='?')
                t[i+j]=NEED[j];
            else
                ok=false;
        if(!ok)
            continue;
        for(char&c:t)
            if(c=='?')
                c='z';
        int cnt=0;
        for(int j=0;j<=n-7;j++)
            if(t.substr(j,7)==NEED)
                cnt++;
        if(cnt==1)
            {
                cout<<"yes"<<endl;
                hbe=true;
                cout<<t<<endl;
                break;
            }
    }
    if(!hbe)
    cout<<"No"<<endl;

 }


}



   
      
    
        

