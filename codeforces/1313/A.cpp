#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n,k,m,ans=0;
          cin>>n>>m>>k;
          vector<long long>sura;
          sura.push_back(n);
          sura.push_back(m);
          sura.push_back(k);
          sort(sura.rbegin(),sura.rend());
          if(sura[0]>0)
          {
              sura[0]--;
              ans++;
          }
           if(sura[1]>0)
          {
              sura[1]--;
              ans++;
          }
           if(sura[2]>0)
          {
              sura[2]--;
              ans++;
          }
          if(sura[0]>0 && sura[1]>0)
          {
            sura[0]--;
            sura[1]--;
              ans++;
          }

           if(sura[1]>0 && sura[2]>0)
          {
            sura[1]--;
              sura[2]--;
              ans++;
          }
           if(sura[2]>0 && sura[0]>0)
          {
            sura[0]--;
              sura[2]--;
              ans++;
          }

          if(sura[0]>0 && sura[1]>0 && sura[2]>0)
          {
              sura[0]--;
              sura[1]--;
              sura[2]--;
              ans++;
          }
          cout<<ans<<endl;



    }
}
