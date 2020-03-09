#include<bits/stdc++.h>
using namespace std;

int main()
{
long long test;
cin>>test;
while(test--)
{
   long long n,k;
   cin>>n>>k;
   vector<long long>sura;
   bool hbe=true;
   for(long i=0;i<n;i++)
   {
       long long l;
       cin>>l;
       sura.push_back(l);

   }

   if(k==1)
   {
           cout<<"YES"<<endl;
           return 0;

   }
   map<long long ,bool>ma;
    for(long i=0;i<n;i++)
   {
       vector<long long>u;
       if(sura[i]==0)
        continue;
   for(long long j=0; sura[i]>0; j++)
{
u.push_back(sura[i]%k);
if(sura[i]%k>1)
{
    hbe=false;
    break;
}
sura[i]=sura[i]/k;

}
for(long long j=0;j<u.size();j++)
{
    if(u[j]==1 && ma[j])
    {
        hbe=false;
        break;

    }
    else if(u[j]==1 && !ma[j])
    {
        ma[j]=true;
    }



}


   }
   if(hbe)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;



}


}
