#include <bits/stdc++.h>
using namespace std;




int main()
{
   long long n,sum=0,l=0,sum1=0;
   cin>>n;
   vector<long long>sura;
for(int i=0;i<n;i++)
{
    long long k;
    cin>>k;
    sura.push_back(k);

}
sort(sura.begin(),sura.end(),greater<long long>());
for(int i=0;i<n-1;i++)
{

    if(sura[i]<=sura[i+1] )
    {
       sura[i+1]=sura[i]-1;
       if(sura[i+1]<0)
        sura[i+1]=0;
    }



}
for(int i=0;i<n;i++)
{
   sum+=sura[i];

   //cout<<sura[i]<<endl;
}
cout<<sum<<endl;

}
