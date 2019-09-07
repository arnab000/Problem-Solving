
#include<bits/stdc++.h>
using namespace std;
 int n,m;
vector <vector <char>> adj;
vector <vector <bool> > vis;
vector <vector <bool> > vis2;
vector <vector <int>> mark;
vector <int> sum;


//bool one=false;


 void dfs(int x,int y){
mark[x][y]++;

vis[x][y]=true;
//69if(vis[n-1][m-1]==true)
   // return;

if(x<n-1 && adj[x+1][y]!='#'  &&  !vis[x+1][y])
    dfs(x+1,y);
if(y<m-1 && adj[x][y+1]!='#' && !vis[x][y+1])
    dfs(x,y+1);







}
 void dfs2(int x,int y){

mark[x][y]++;
vis2[x][y]=true;
if(mark[x][y]==2)
{
    sum[x+y]++;
}

if(x>0 && adj[x-1][y]!='#' && !vis2[x-1][y] )
    dfs2(x-1,y);
if(y>0 && adj[x][y-1]!='#' && !vis2[x][y-1])
    dfs2(x,y-1);






}










int main()
{

    cin>>n>>m;
       adj.resize(n, vector <char>(m));
    vis.resize(n, vector <bool> (m, false));
    vis2.resize(n, vector <bool> (m, false));
    mark.resize(n,vector<int>(m,0));
    sum.resize(n+m,0);
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>adj[i][j];
    }
}
dfs(0,0);
if(vis[n-1][m-1]==false)
{
    cout<<0<<endl;
    return 0;
}
dfs2(n-1,m-1);
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((i==0 && j==0)||(i==n-1 && j==m-1))
            continue;
        if(mark[i][j]==2 && sum[i+j]==1)
        {
            cout<<1<<endl;
            return 0;
        }
    }

}
cout<<2<<endl;




}
