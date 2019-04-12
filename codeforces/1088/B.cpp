#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,j,l,k,m,n;
  vector<long long>sura;
  vector<long long>sura2;
  vector<long long>sura3;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>k;
        sura.push_back(k);

    }
 sort(sura.begin(),sura.end());
 for(i=0;i<n;i++)
 {
     while(sura[i]==sura[i+1] && i<n)
     {
         i++;
     }
     sura2.push_back(sura[i]);
 }

    m=sura2[0];
    sura3.push_back(sura2[0]);
 for(i=1;i<sura2.size();i++)
 {
     if((sura2[i]-m)>0)
        sura3.push_back(sura2[i]-m);

      m=m+(sura2[i]-m);
 }
 for(i=0;i<l;i++)
 {
     if(i>=sura3.size())
        cout<<0<<endl;
     else
        cout<<sura3[i]<<endl;
 }
}
