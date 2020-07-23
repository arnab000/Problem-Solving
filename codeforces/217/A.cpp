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
ll arr[101];
ll sz[101];
ll num;
void dsu(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        arr[i]=i;
        sz[i]=1;
    }
}
ll find(ll x)
{
     ll root=x;
    while (root!=arr[root])
    {
        root=arr[root];
    }
    while(x!=arr[x])
    {
        arr[x]=root;
        x=arr[x];
    }
    return root;
}
void merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return;

    if(sz[x]>sz[y]){
    arr[root2]=root1;
    sz[x]+=sz[y];
    }
    else
    {
         sz[y]+=sz[x];
        arr[root1]=root2;
    }
    num--;
    
    
}
map<pair<ll,ll>,bool>vis;

int main()
{
    Fast
ll n;
cin>>n;
dsu(n);
num=n;
vector<pair<ll,ll>>sura(n+1);

for(ll i=1;i<=n;i++)
{
   cin>>sura[i].first>>sura[i].second;
}


for(ll i=1;i<=n;i++)
{
 
    for(ll j=1;j<=n;j++)
    {
        if(sura[i].first==sura[j].first || sura[i].second==sura[j].second)
        {
            merge(i,j);
           
        }
        
        
    }
   
   
}


cout<<num-1<<endl;

}



   
      
    
        

