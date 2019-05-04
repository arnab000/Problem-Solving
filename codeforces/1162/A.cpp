#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,mn,mx=0,l,z,dada;
   cin>>n>>m>>k;
   int arr[n+1];
   for(i=1;i<=n;i++)
   {
       arr[i]=m;
   }


    vector<int>sura;
    for(i=0;i<k;i++)
    {
        cin>>l>>z>>dada;
        for(j=l;j<=z;j++)
        {
            if(arr[j]>dada)
                arr[j]=dada;
        }

    }
     for(i=1;i<=n;i++)
   {
       mx+=(arr[i]*arr[i]);
   }
   cout<<mx<<endl;

}