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
   for(long i=0;i<n;i++)
   {
       long long k;
       cin>>k;
       sura.push_back(k);
   }
   sort(sura.rbegin(),sura.rend());
   for(long i=0;i<n;i++)
   {
     cout<<sura[i]<<" ";
   }
   cout<<endl;


}


}
