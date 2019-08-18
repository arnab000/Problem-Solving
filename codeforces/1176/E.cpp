#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[200007];
int visited[200007];
int a=0,b=0;
 
void dfs(int i)
{
 
      for(auto &it:adj[i])
      {
          if(visited[it]== -1){
            //    cout<<"it "<<it<<endl;
          if(visited[i]==1)
          {
            //  cout<<it<<endl;
              visited[it]=2;
              b++;
          }
          else
          {
              visited[it]=1;a++;
          }
          dfs(it);
          }
      }
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        a=0,b=0;
 
        cin>>n>>m;
         for(int j=1;j<=n;j++){
            visited[j]=-1;
            adj[j].clear();
         }
 
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
         visited[1]=1;
        dfs(1);
 
        a++;
        if(a<b)
        {
            cout<<a<<endl;
            for(int j=1;j<=n;j++)
            {
                if(visited[j]==1)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
 
        }
        else
        {
            cout<<b<<endl;
            for(int j=1;j<=n;j++)
            {
                if(visited[j]==2)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
 
    }
}