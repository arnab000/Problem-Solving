#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k,l;
    vector<long long>sura;
    cin>>n>>k;
    for(long long i=0;i<n;i++)
    {
        long long l;
        cin>>l;
        sura.push_back(l);
    }
    sort(sura.begin(),sura.end());
    long long t=1;
    long long y=0;
    long long ans=sura[n/2];
   // cout<<sura[n/2]<<endl;
   // cout<<ans<<endl;
     for(long long i=n/2;i<n-1;i++)
    {
        long long p=sura[i+1]-sura[i];
       // cout<<p<<endl;
        ans+=p;
        long long pre_y=y;
        y=y+(p*t);
        t++;


     if(y>k)
     {

         t--;
         ans-=p;
         long long o=k-pre_y;
         ans+=o/t;
         cout<<ans<<endl;
         return 0;






     }
    // cout<<k<<" "<<y<<" "<<ans<<endl;
      if(y==k)
     {
         cout<<ans<<endl;
         return 0;
     }

    }
    //cout<<ans<<endl;
     long long o=k-y;
         ans+=o/t;
         cout<<ans<<endl;
        // return 0;


}
