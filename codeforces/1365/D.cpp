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
bool vis[60][60];
char ch[60][60];
int n,m;
 void bfs(int x,int y)
 { 
     
   
    vis[x][y]=true;
    if(x<n && ch[x+1][y]!='#' && !vis[x+1][y])
    bfs(x+1,y);
    if(x>1 && ch[x-1][y]!='#' &&!vis[x-1][y] )
    bfs(x-1,y);
    if(y<m && ch[x][y+1]!='#'&& !vis[x][y+1])
    bfs(x,y+1);
    if(y>1 && ch[x][y-1]!='#'&& !vis[x][y-1])
    bfs(x,y-1);

 }

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
      
        cin>>n>>m;
        for(int i=0;i<=n+2;i++){
            for(int j=0;j<=m+2;j++)
            {
               ch[i][j]='.';
               vis[i][j]=false;
            }
        }
      
        vector<pair<int,int>>good;
        vector<pair<int,int> >bad;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='G')
                good.push_back({i,j});
                if(ch[i][j]=='B')
                bad.push_back({i,j});
            }
        }
       
        for(int i=0;i<bad.size();i++)
        {
            if(ch[bad[i].first+1][bad[i].second]=='.' )
            ch[bad[i].first+1][bad[i].second]='#';
            if(ch[bad[i].first-1][bad[i].second]=='.' )
            ch[bad[i].first-1][bad[i].second]='#';
            if(ch[bad[i].first][bad[i].second+1]=='.' )
            ch[bad[i].first][bad[i].second+1]='#';
            if(ch[bad[i].first][bad[i].second-1]=='.' )
            ch[bad[i].first][bad[i].second-1]='#';
            
        }
        
        if(ch[n][m]!='#')
        bfs(n,m);
        
        bool hbe=true;
        for(int i=0;i<bad.size();i++)
        {
            if(vis[bad[i].first][bad[i].second]==true )
            hbe=false;
        }
        for(int i=0;i<good.size();i++)
        {
            if(vis[good[i].first][good[i].second]==false )
            hbe=false;
        }
        if(hbe)
        cout<<"YES"<<endl;
        else
        {
          cout<<"NO"<<endl;
        }
        
        
    }
    


  }



   
      
    
        

