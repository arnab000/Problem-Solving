#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,m,s,c,t,a,con,x,p,vis[200];
    vector<long long int >v;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;v.clear();
        memset(vis,0,sizeof(vis));
        con=0;
        for(i=0;i<n;i++){cin>>k;v.push_back(k);}
        for(i=0;i<n;i++)
        {
            x=v[i];
            if(x==0) continue;
            else
               k=ceil(log(x)/log(a));
            //cout<<"k"<<k<<endl;
            for(j=k;j>=0;j--){  p=ceil(powl(a,j));
                if(p<=x&&vis[j]==0) {
                        x-=p;vis[j]=1;
                }
            }
            if(x!=0){con=1;break;}
        }
        if(con==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}