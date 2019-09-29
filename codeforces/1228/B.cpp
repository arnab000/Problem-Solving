#include<bits/stdc++.h>
using namespace std;
int table[1005][1005];

int main()
{
  int r,c;
  cin>>r>>c;
  long long ans=1;
  for(int i=1;i<=r;i++)
  {
      int k;
      cin>>k;
      for(int j=1;j<=k;j++)
      {
          table[i][j]=2;
      }
      table[i][k+1]=1;
  }
    for(int i=1;i<=c;i++)
  {
      int k;
      cin>>k;
      for(int j=1;j<=k;j++)
      {
          if(table[j][i]==1)
          {
              cout<<0<<endl;
              return 0;
          }
          table[j][i]=2;
      }
      if(table[k+1][i]==2)
          {
              cout<<0<<endl;
              return 0;
          }
      table[k+1][i]=1;
  }
  for(int i=1;i<=r;i++)
  {
      for(int j=1;j<=c;j++)
      {
          if(table[i][j]==0)
          {
           ans*=(2%1000000007);
           ans=ans%1000000007;
          }
      }
  }
  cout<<ans<<endl;


}
