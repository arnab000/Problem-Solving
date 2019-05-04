#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m,i,j,k,l;
  cin>>m>>n;
long long arr[m+1][n+1];
 long long ar[m+1][n+1];
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          cin>>arr[i][j];

      }
  }
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          cin>>ar[i][j];
          if(arr[i][j]>ar[i][j])
          {
             swap(arr[i][j],ar[i][j]);
          }

      }
  }
   for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          if((arr[i][j]>=arr[i][j+1] && j+1<n) || (arr[i][j]>=arr[i+1][j] && i+1<m)|| (ar[i][j]>=ar[i][j+1] && j+1<n) ||( ar[i][j]>=ar[i+1][j] && i+1<m))
          {
              cout<<"Impossible"<<endl;
              return 0;
          }

      }
  }
  cout<<"Possible"<<endl;


}
