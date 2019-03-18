
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<long long>sura1[1100];
    vector<long long>sura2[1100];
    long long n,m,i,j,dada,d=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>dada;
            sura1[i+j].push_back(dada);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>dada;
            sura2[i+j].push_back(dada);
        }
    }
    for(i=0;i<n+m-1;i++)
    {
        sort(sura1[i].begin(),sura1[i].end());
        sort(sura2[i].begin(),sura2[i].end());
    }
     for(i=0;i<n+m-1;i++)
    {
        for(j=0;j<sura1[i].size();j++)
        {
            if(sura1[i][j]==sura2[i][j])
            {
                d++;
            }
        }
    }
    if(d==n*m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}
