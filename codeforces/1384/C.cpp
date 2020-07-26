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

ll arr[27];
ll sz[27];
 
void dsu()
{
    for(ll i=0;i<=26;i++)
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
ll merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return 0ll;
 
    if(sz[x]>sz[y]){
    arr[root2]=root1;
    sz[x]+=sz[y];
    }
    else
    {
         sz[y]+=sz[x];
        arr[root1]=root2;
    }
    return 1ll;
    
    
}
 
int main()
{
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
     string a,b;
     cin>>a>>b;
     dsu();
     bool hbe=true;
     for(ll i=0;i<n;i++)
     {
         if(b[i]<a[i])
         hbe=false;
     }
     if(!hbe){
     cout<<-1<<endl;
     continue;
     }
     ll ans=0;
     for(ll i=0;i<n;i++)
     {
         if(b[i]==a[i])
        continue;
        ans+=merge(a[i]-'a',b[i]-'a');
 
        
     }
     cout<<ans<<endl;
    
 
 }
 
 
}
 