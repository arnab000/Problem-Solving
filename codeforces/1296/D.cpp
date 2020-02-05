#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,l;
    cin>>n>>m>>k>>l;
    vector<long long >sura;
    vector<pair<long long,long long> >ans;

    for(long long i=0;i<n;i++)
    {
        long long d;
        cin>>d;
        long long j=(d%(k+m));
        sura.push_back(j);

    }
    for(long long i=0;i<n;i++)
    {
      if(sura[i]==0){
            long long p=ceil(k*1.00/m);
            //cout<<sura[i]<<" "<<p<<endl;
        ans.push_back({p,1});
      }
      else if(sura[i]<=m)
      {
         ans.push_back({0,1});
      }
      else if(sura[i]>m )
      {

          long long o=ceil((sura[i]-m)*1.00/m);
                 //cout<<sura[i]<<" "<<o<<endl;
          ans.push_back({o,1});
      }


    }
    sort(ans.begin(),ans.end());
       long long u=0;
        long long y=0;
    for(long long i=0;i<n;i++)
    {
       // cout<<ans[i].first<<" "<<ans[i].second<<endl;


          u+=ans[i].first;

         if(u>l)
            break;
         y+=ans[i].second;

    }
    cout<<y<<endl;

}
