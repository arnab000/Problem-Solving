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
const ll mx=100005;
ll sz[mx];
ll id[mx];
ll n,m;
ll num_com;
void merge(ll si)
{
    for(ll i=1;i<=si;i++)
    {
        id[i]=i;
        sz[i]=1;
    }
    num_com=si;
}
ll find(ll p)
{
    ll root=p;
    while(root!=id[root])
    {
        root=id[root];
    }
    ll next=p;
    while (next!=id[next])
    {
        next=id[next];
        id[next]=root;
    }
    return root;
    
}
ll dsu(ll p, ll q)
{
  
   ll root1=find(p);
   ll root2=find(q);
    if(root1==root2)
   return 1;
   if(sz[root1]>sz[root2])
   {
       sz[root1]+=sz[root2];
       id[root2]=root1;
   }
   else
   {
       sz[root2]+=sz[root2];
       id[root1]=root2;
   }
   return 2;
   

}




int main()
{
 
cin>>n>>m;
merge(n);
ll ans=0;
for(ll i=0;i<m;i++)
{
    ll u,v;
    cin>>u>>v;
    ll baal=dsu(u,v);
   // cout<<baal<<endl;
    if(baal==1)
      ans++;
}
cout<<ans<<endl;

}



   
      
    
        

