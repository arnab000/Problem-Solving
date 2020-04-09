#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
       bool hbe=true,o=false,p=false;
       long long k;
       cin>>k;
       vector<long long>sura;
       vector<long long>mura;

       for(long long i=0;i<k;i++)
       {
           long long t;
           cin>>t;
           sura.push_back(t);
       }
    for(long long i=0;i<k;i++)
       {
           long long t;
           cin>>t;
           mura.push_back(t);
       }
        for(long long i=0;i<k;i++)
       {

          if(mura[i]>sura[i] && !o)
          {
              hbe=false;
          }
           if(mura[i]<sura[i] && !p)
          {
              hbe=false;
          }
           if(sura[i]==1)
            o=true;
           if(sura[i]==-1)
            p=true;


       }
       if(hbe)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;

    }
}
