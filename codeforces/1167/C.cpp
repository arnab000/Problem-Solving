#include<bits/stdc++.h>
using namespace std;
bool vis[500005];
vector<int>adj[500005];
int cunt[500005];
int dfs(int i){
    int j;
stack<int>s;
if(!vis[i])
s.push(i);
vis[i]=true;
cunt[i]=i;
int x=0;
while(!s.empty()){
        x++;
    int p=s.top();
    s.pop();
    for(j=0;j<adj[p].size();j++){

        if(!vis[adj[p][j]]){

            s.push(adj[p][j]);
            vis[adj[p][j]]=true;
            cunt[adj[p][j]]=i;


        }

    }



}

return x;



}







int main(){
int i,j,k,l,n,m;
vector<int>ans;
cin>>n>>m;
while(m--){

    cin>>k;
    if(!k)
        continue;
    int st;
    cin>>st;
    k--;
    while(k--){
            cin>>l;
        adj[st].push_back(l);
    adj[l].push_back(st);
    }
}
for(i=1;i<=n;i++){
        //cout<<i<<endl;
//cout<<i<<" "<<dfs(i)<<endl;
    if(!vis[i]){
            ans.push_back(dfs(i));
       cout<<ans[i-1]<<" ";
       //cout<<dfs(i)<<endl;
    }
    else{
    ans.push_back(ans[cunt[i]-1]);
    cout<<ans[cunt[i]-1]<<" ";
    }


}

/*
7 5
3 2 5 4
0
2 1 2
1 1
2 6 7
*/






}
