#include<bits/stdc++.h>
    
using namespace std;
#define ll long long

#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(a,b,c) for(int i=a;i<b;i+=c)  
int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
vector<int>dp[200001];
int main()
{
      
          int n;
      vector<int>sura;
        cin>>n;
        f(0,n,1)
        {
            int k;
            cin>>k;
            sura.push_back(k);
        }
        f(0,n,1)
        {
            for(int j=2;j<=sqrt(sura[i]);j++)
            {
                int pi=0;
              while(sura[i]%j==0)
              {
                 pi++;
                 sura[i]/=j;
              }
              dp[j].push_back(pi);
            }
            if(sura[i]>1)
            {
                dp[sura[i]].push_back(1);
            }
            
        }
        ll ans=1;
        for(int i=1;i<=200000;i++)
        {
            if(dp[i].size()==n)
            {
                sort(dp[i].begin(),dp[i].end());
               int u=pow(i,dp[i][1]);
               ans*=u;
            }
            if(dp[i].size()==n-1)
            {
                sort(dp[i].begin(),dp[i].end());
               int u=pow(i,dp[i][0]);
               ans*=u;
            }

        }
        cout<<ans<<endl;
         
   
      
    
        

}