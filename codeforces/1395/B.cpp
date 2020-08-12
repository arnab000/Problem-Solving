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
     long long border=0; arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
        border=arr[border-1];
     
     if(s[i]==s[border])
         border++;
      else
       border=0;
      
      arr[i]=border;
    }
}
ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
//send mod-2 for a^-1 if mod is a prime number
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll dsu_arr[100000];
ll dsu_sz[100000];
void dsu(ll n)
{
    for(ll i=0;i<=n;i++)
    {
        dsu_arr[i]=i;
        dsu_sz[i]=1;
    }
}
ll find(ll x)
{
     ll root=x;
    while (root!=dsu_arr[root])
    {
        root=dsu_arr[root];
    }
    while(x!=dsu_arr[x])
    {
        dsu_arr[x]=root;
        x=dsu_arr[x];
    }
    return root;
}
ll merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return 0ll;
 
    if(dsu_sz[x]>dsu_sz[y]){
    dsu_arr[root2]=root1;
    dsu_sz[x]+=dsu_sz[y];
    }
    else
    {
         dsu_sz[y]+=dsu_sz[x];
        dsu_arr[root1]=root2;
    }
    return 1ll;
}

bool sura[105][105];
ll n,m,x,y;
bool rep(ll d)
{
 
 for(ll i=n;i>=1;i--)
 {
     if(sura[i][d]==true)
     return false;
     cout<<i<<" "<<d<<endl;
     sura[i][d]=true;
 }
 return true;
}
bool inv(ll d)
{
 
 for(ll i=1;i<=n;i++)
 {
     if(sura[i][d]==true)
     return false;
     cout<<i<<" "<<d<<endl;
     sura[i][d]=true;
 }
 return true;
}

int main()
{

cin>>n>>m>>x>>y;

if(x==1)
{
    sura[x][y]=true;
    cout<<x<<" "<<y<<endl;
    for(ll i=2;i<=n;i++)
    {
        sura[i][y]=true;
        cout<<i<<" "<<y<<endl;
    }
    ll cou=0;
    for(ll i=1;i<=m;i++)
    {
       if(cou%2==0)
       {
           bool hbe=rep(i);
           if(hbe)
           cou++;

       } 
       else
       {
           bool hbe=inv(i);
           if(hbe)
           cou++;
       }
    }

    
}
else if(x==n)
{
    sura[x][y]=true;
    cout<<x<<" "<<y<<endl;
    for(ll i=n-1;i>=1;i--)
    {
        sura[i][y]=true;
        cout<<i<<" "<<y<<endl;
    }
    ll cou=0;
    for(ll i=1;i<=m;i++)
    {
       if(cou%2==0)
       {
           bool hbe=inv(i);
           if(hbe)
           cou++;

       } 
       else
       {
            bool hbe=rep(i);
           if(hbe)
           cou++;
       }
    }

    
}
else
{
       sura[x][y]=true;
    cout<<x<<" "<<y<<endl;
    for(ll i=n;i>=1;i--)
    {
        if(sura[i][y]!=true)
        cout<<i<<" "<<y<<endl;
        sura[i][y]=true;
        
    }
    ll cou=0;
    for(ll i=1;i<=m;i++)
    {
       if(cou%2==0)
       {
           bool hbe=inv(i);
           if(hbe)
           cou++;

       } 
       else
       {
            bool hbe=rep(i);
           if(hbe)
           cou++;
       }
    }
}


}



   
      
    
        

