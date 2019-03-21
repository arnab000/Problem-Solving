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

for(int i=n-1;i>0;i--)
{
    //cout<<sura[i]<<endl;

    if(sura[i]<=sura[i-1] )
    {
       sura[i-1]=sura[i]-1;
       if(sura[i-1]<=0)
        break;
    }



}
for(int i=n-1;i>=0;i--)
{
    if(sura[i]==0)
        break;
   sum+=sura[i];


   //cout<<sura[i]<<endl;
}
cout<<sum<<endl;

}
