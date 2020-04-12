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
      for(long long i=1;i<n;i++)
      {

          if(sura[i-1]>sura[i]){
            ans.push_back(abs(sura[i-1]-sura[i]));
            sura[i]=sura[i-1];
          }
      }
      long long kuta=0;
              long long h=1;
       for(long long i=0;i<ans.size();i++)
      {
;
        long long t=0;
        while(h<ans[i])
        {
            h=h*2;
            t++;
        }
        if(h==ans[i]){
            h=h*2;
            t++;
        }
        kuta+=t;

      }
      cout<<kuta<<endl;
    }
}
