#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
      long long n,tmp=0;
      cin>>n;
      vector<long long>sura;
      set<long long>s;
      for(int i=0;i<n;i++)
      {
          long long k;
          cin>>k;
          sura.push_back(k);

      }
      sort(sura.rbegin(),sura.rend());
    for(int i=0;i<n;i++)
      {
         if(s.find(sura[i])!=s.end())
            continue;
         s.insert(sura[i]);
         while(sura[i]%2==0)
         {
             sura[i]/=2;
             tmp++;
             s.insert(sura[i]);
         }


      }
      cout<<tmp<<endl;

    }

}
