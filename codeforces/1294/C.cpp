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
     vector<long long>sura;
     for(long long i=2;i*i<=n;i++)
     {
         if(n%i==0)
         {
             if(n/i==i)
                sura.push_back(i);
             else{
                sura.push_back(i);
                sura.push_back(n/i);
             }
         }

     }
    sort(sura.begin(),sura.end());
      if(sura.size()<2)
      {
          cout<<"NO"<<endl;
          continue;
      }
bool      hbe=false;
      for(int i=0;i<sura.size();i++)
      {
          for(int j=i+1;j<sura.size();j++)
          {
              long long k=sura[i]*sura[j];
              long long h;
              if(n%k==0)
           h=n/k;
           else
            h=1;
           if(h!=sura[i] && h!=sura[j] && h!=1 )
     {
         cout<<"YES"<<endl;
         cout<<sura[i]<<" "<<sura[j]<<" "<<h<<endl;
         hbe=true;
         break;
     }
          }
          if(hbe==true)
            break;
      }


if(!hbe)
        cout<<"NO"<<endl;

    }
}
