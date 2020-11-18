/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/

#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
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
}//send mod-2 for a^-1 if mod is a prime number

ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll subs(ll a,ll b)
{
    return (((a%mod)-(b%mod)+mod)%mod);
}
ll dv(ll a,ll b)
{
    ll inv=binpow(b,mod-2);
    return mul(a,inv);
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
    dsu_sz[root1]+=dsu_sz[root2];
    }
    else
    {
         dsu_sz[root2]+=dsu_sz[root1];
        dsu_arr[root1]=root2;
    }
    return 1ll;
}
/*
vector<ll>adj[100005];
bool vis[100005];
ll dist[100005];
void bfs(ll c)
{
  vis[c]=true;
  dist[c]=0;
  queue<ll>q;
  q.push(c);
while(!q.empty())
{
    ll x=q.front();
    q.pop();
   
    for(ll i=0;i<adj[x].size();i++)
    {
        ll y=adj[x][i];
        if(!vis[y])
        {
            vis[y]=true;
            dist[y]=dist[x]+1;
            
            q.push(y);
        }
    }
 
}
}
*/


   char arr[105][105];
   vector<pair<pair<ll,ll>,pair<pair<ll,ll>,pair<ll,ll>>>>moves;
   void flip (ll x1,ll y1 , ll x2,ll y2, ll x3,ll y3)
   {
       if(arr[x1][y1]=='0')
       arr[x1][y1]='1';
       else
       {
           arr[x1][y1]='0';
       }
       if(arr[x2][y2]=='0')
       arr[x2][y2]='1';
       else
       {
           arr[x2][y2]='0';
       }
       if(arr[x3][y3]=='0')
       arr[x3][y3]='1';
       else
       {
           arr[x3][y3]='0';
       }
       moves.push_back({{x1,y1},{{x2,y2},{x3,y3}}});
       

   }
   void three( ll x,ll y)
   {
       pair<pair<ll,ll>,pair<pair<ll,ll>,pair<ll,ll>>>u;
          for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.first.first=i;
                   u.first.second=j;
  arr[u.first.first][u.first.second]='0';
  hbe=true;
  break;

                   
               }
           }
           if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
            bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.second.first.first=i;
                   u.second.first.second=j;
                   arr[ u.second.first.first][ u.second.first.second]='0';
                   hbe=true;
  break;
               }
           }
            if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.second.second.first=i;
                   u.second.second.second=j;
                   arr[ u.second.second.first][ u.second.second.second]='0';
                   hbe=true;
  break;
               }
           }
            if(hbe)
           break;
       }
       moves.push_back(u);
 
     
       
       
   }
   void two(ll x,ll y)
   {
       pair<pair<ll,ll>,pair<pair<ll,ll>,pair<ll,ll>>>u;
         for(ll i=x;i<=x+1;i++)
       {
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.first.first=i;
                   u.first.second=j;
                   
               }
           }
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='0')
               {
                   u.second.first.first=i;
                   u.second.first.second=j;
                   arr[ u.second.first.first][ u.second.first.second]='1';
                   hbe=true;
                   break;
                   
               }
           }

           if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='0')
               {
                   u.second.second.first=i;
                   u.second.second.second=j;
                      arr[u.second.second.first][ u.second.second.second]='1';
                      hbe=true;
                   break;
                   
               }
           }
             if(hbe)
           break;
       }
       moves.push_back(u);
 
       arr[u.first.first][u.first.second]='0';
       
     three(x, y);


   }
   void one(ll x,ll y)
   {
  pair<pair<ll,ll>,pair<pair<ll,ll>,pair<ll,ll>>>u;
         for(ll i=x;i<=x+1;i++)
       {
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.first.first=i;
                   u.first.second=j;
                   
               }
           }
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='0')
               {
                   u.second.first.first=i;
                   u.second.first.second=j;
                   arr[i][j]='1';
                   hbe=true;
                   break;
                   
               }
           }

           if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='0')
               {
                   u.second.second.first=i;
                   u.second.second.second=j;
                      arr[u.second.second.first][ u.second.second.second]='1';
                      hbe=true;
                   break;
                   
               }
           }
             if(hbe)
           break;
       }
       moves.push_back(u);
 
       arr[u.first.first][u.first.second]='0';
       
two(x,y);
   }
   void four(ll x,ll y)
   {
      pair<pair<ll,ll>,pair<pair<ll,ll>,pair<ll,ll>>>u;
          for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.first.first=i;
                   u.first.second=j;
  arr[u.first.first][u.first.second]='0';
  hbe=true;
  break;

                   
               }
           }
           if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
            bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.second.first.first=i;
                   u.second.first.second=j;
                   arr[ u.second.first.first][ u.second.first.second]='0';
                   hbe=true;
  break;
               }
           }
            if(hbe)
           break;
       }
       for(ll i=x;i<=x+1;i++)
       {
           bool hbe=false;
           for(ll j=y;j<=y+1;j++)
           {
               if(arr[i][j]=='1')
               {
                   u.second.second.first=i;
                   u.second.second.second=j;
                   arr[ u.second.second.first][ u.second.second.second]='0';
                   hbe=true;
  break;
               }
           }
            if(hbe)
           break;
       }
       moves.push_back(u);
       one( x, y);
   }

int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
     ll n,m;
     cin>>n>>m;
 moves.clear();
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(ll j=0;j<m-2;j++){
    for(ll i=0;i<n;i++)
    {
       
           if(arr[i][j]=='1')
           {
               if(i==n-1)
               {
                  
                 flip(i,j,i,j+1,i-1,j+1);
                   
               }
               else
               {
                  
                        flip(i,j,i,j+1,i+1,j+1);
                  
               }
               
           }
        
    }
    }
    if(n%2!=0)
    {
       if(arr[n-1][m-1]=='1' &&  arr[n-1][m-2]=='1')
       {
           flip(n-1,m-1,n-1,m-2,n-2,m-2);
       }else if(arr[n-1][m-1]=='1')
       {
           flip(n-1,m-1,n-2,m-1,n-2,m-2);
       }
       else if(arr[n-1][m-2]=='1')
       {
           flip(n-1,m-2,n-2,m-1,n-2,m-2);
       }
    }
    ll r=m-2;
    for(ll l=0;l<n-1;l+=2)
    {
        ll cnt=0;
            for(ll i=l;i<=l+1;i++)
       {
           
           for(ll j=r;j<=r+1;j++)
           {
               if(arr[i][j]=='1')
               {
             cnt++;

                   
               }
           }
       }
       if(cnt==1)
       {
           one(l,r);
       }
       else if(cnt==2)
       {
           two(l,r);
       }
       else if(cnt==3)
       {
           three(l,r);
       }
       else if(cnt==4)
       {
           four(l,r);
       }
    }
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    

    if(!moves.empty()){
        cout<<moves.size()<<'\n';
for(ll ami=0;ami<moves.size();ami++)
{
    cout<<moves[ami].first.first+1<<" "<<moves[ami].first.second+1<<" "<<moves[ami].second.first.first+1<<" "<<moves[ami].second.first.second+1<<" "<<moves[ami].second.second.first+1<<" "<<moves[ami].second.second.second+1<<'\n';
}
    
    }
    else
    {
        cout<<0<<'\n';
    }
     
    
    


}

}

   
      
    
        

