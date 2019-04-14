#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h,i,j,k;
    vector<int>row;
    vector<int>column;
    vector<int>sura[101];
    vector<int>verify[101];
    cin>>n>>m>>h;
    for(i=0;i<m;i++)
    {
        cin>>k;
        column.push_back(k);
    }
    for(i=0;i<n;i++)
    {
        cin>>k;
        row.push_back(k);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          cin>>k;
          sura[i].push_back(k);
          verify[i].push_back(k);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         if(sura[i][j]==1 && verify[i][j]==1)
         {
             sura[i][j]=min(row[i],column[j]);
             verify[i][j]=0;

         }
        }
    }

      for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         cout<<sura[i][j]<<" ";
        }
        cout<<endl;
    }
}
