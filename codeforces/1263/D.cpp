#include<bits/stdc++.h>
using namespace std;
vector<int>adj[700];
bool vis[700];

int dfs(int c)
{
    vis[c]=true;
    queue<int>q;
    q.push(c);
    while(!q.empty())
    {
        int u=q.front();
       // cout<<u<<endl;
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
             int v=adj[u][i];
            if(!vis[v]){

            q.push(v);
            vis[v]=true;
            }

        }

    }
}

int main()
{
   int n;
   cin>>n;
  int arr[50]={0};

   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
arr[s[0]-'a']=1;
       for(int i=1;i<s.size();i++)
       {
           arr[s[i]-'a']=1;
           adj[s[0]-'a'].push_back(s[i]-'a');
           adj[s[i]-'a'].push_back(s[0]-'a');
       }
   }
   int ans=0;
   for (int i=0;i<=26;i++)
   {

       if(!vis[i] && arr[i] )
       {
          // cout<<ans<<endl;
           dfs(i);
           ans++;
       }
   }
   cout<<ans<<endl;


}
