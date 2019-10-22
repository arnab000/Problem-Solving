#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int vis[n+1]={0};
        int sura[n+1];

for(int i=1;i<=n;i++)
{
   cin>>sura[i];
}

    for(int i=1;i<=n;i++)
    {
        int k=i;
        int c=1;
        if(vis[i]==0){

        while(sura[k]!=i)
        {
            k=sura[k];

            c++;
            //k--;
            vis[k]=i+n;

        }
        vis[i]=c;
        }



    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]<=n)
            cout<<vis[i]<<" ";
        else
        cout<<vis[vis[i]-n]<<" ";
    }
    cout<<endl;
}
}
