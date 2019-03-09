#include<bits/stdc++.h>
using namespace std;
int main()
{
long  double x,y=0,i,j=0,k,l,next=0,n;
 vector<long double>sura;
 vector<long double >sura1;
 vector<long double >sura2;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>k;
     sura.push_back(k);
 }
  for(i=0;i<n;i++)
 {
     cin>>l;
     sura1.push_back(l);
 }
  for(i=0;i<n;i++)
 {
     if(sura[i]==0 && sura1[i]==0)
     {
         sura2.push_back(10000000000);
         j++;
     }
     else if(sura[i]==0 && sura1[i]!=0)
     {
         sura2.push_back(-10000000000);
     }
     else if(sura[i]!=0 && sura1[i]==0)
     {
         sura2.push_back(0);

     }
      else
     sura2.push_back(sura[i]/sura1[i]*1.0);
     if(sura2[i]==-10000000000)
     {
        next++;
     }
    // cout<<sura2[i]<<endl;
 }
 sort(sura2.begin(),sura2.end());
 x=-INT_MAX;

 for(i=0;i<n;i++)
 {
     y=1;
     while(sura2[i]==sura2[i+1]&& sura2[i]!=-10000000000&&sura2[i]!=10000000000)
     {

        y++;
        i++;
     }
     x=max(x,y);

 }
 if(next==n)
 {
     cout<<0<<endl;
 }
 else if(j==n)
 {
     cout<<j<<endl;
 }
 else
cout<<x+j<<endl;


}
