#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,b,c,i,j,k,l,sum=0;
    //string s;
    vector<long long>sura;

   cin>>b;
   for(i=0;i<b;i++)
   {
       cin>>k;
       sura.push_back(k);

   }
   cin>>a>>l;
   for(i=0;i<b;i++)
   {
       sura[i]=sura[i]-a;
       j=ceil(sura[i]*1.0/(a+l));
            
       sum+=(j*l);
   }
  cout<<sum<<endl;


}
