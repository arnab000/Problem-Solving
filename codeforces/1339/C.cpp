#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {


      long long n;
      cin>>n;
      vector<long long >sura;
      for(long long i=0;i<n;i++)
      {
          long long k;
          cin>>k;
          sura.push_back(k);
      }
      vector<long long >ans;
      long long kuta=0;
      for(long long i=1;i<n;i++)
      {

          if(sura[i-1]>sura[i])
           {
               kuta=max(kuta,abs(sura[i-1]-sura[i]));
               sura[i]=sura[i-1];
           }
      }
      if(kuta==0)
      {
          cout<<0<<endl;
          continue;
      }
      long long gaja=log2(kuta);
      gaja++;
      cout<<gaja<<endl;
    }

}
