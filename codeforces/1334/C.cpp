

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    long long test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        long long sura[n+1],sum[n+1],mura[n+1];
        long long mn=1e18;
       long long mn1=INT_MAX;
        for(long long i=1;i<=n;i++)
        {
            cin>>sura[i];
            cin>>mura[i];
         mn=min(mn,sura[i]);
        }

    sum[0]=sura[1]-mura[n];
          for(long long i=1;i<n;i++)
        {
           sum[i]=(sura[i+1]-mura[i]);
        }
        long long ans=0;
        long long mx=-1,haha;

    bool pasa=false;
          for(long long i=1;i<=n;i++)
        {
         if(sum>0)
         {
           mn=min(mn,sura[i]-sum[i-1]);
           //pasa=true;
         }

        }


        for(long long i=0;i<n;i++)
        {
            if(sum[i]>0)
           ans+=sum[i];
        }
        cout<<ans+mn<<endl;
    }
}

