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
       for(long long i=0;i<n;i++ )
       {
           long long k;
           cin>>k;
           if(k<=2048)
            sura.push_back(k);
       }
       sort(sura.rbegin(),sura.rend());
       long long sum=0;
       bool hbe=false;
        for(long long i=0;i<sura.size();i++ )
       {
           sum+=sura[i];
           if(sum==2048)
            hbe=true;
       }
       if(hbe)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }


}