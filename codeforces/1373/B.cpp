#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
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

    ll one=0,zero=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        one++;
        else
        {
            zero++;
        }
        
    }
    if(min(one,zero)%2 ==0)
    cout<<"NET"<<endl;
    else
    {
        cout<<"DA"<<endl;
    }
    
}
   
}
    
 

 
 
 
   
      