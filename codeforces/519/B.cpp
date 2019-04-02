#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long x,y,i,j,n;
 vector<long long>sura;
 vector<long long>sura1;
 vector<long long>sura2;
 cin>>n;
 for(i=0;i<n;i++)
{
     cin>>x;
     sura.push_back(x);
 }
 for(i=0;i<n-1;i++)
 {
     cin>>x;
     sura1.push_back(x);
 }
 sura1.push_back(10000000000);
 for(i=0;i<n-2;i++)
 {
     cin>>x;
     sura2.push_back(x);
 }
 sura2.push_back(10000000000);
 sura2.push_back(10000000000);
 sort(sura.begin(),sura.end());
 sort(sura1.begin(),sura1.end());
 sort(sura2.begin(),sura2.end());
  for(i=0;i<n;i++)
{
     if(sura[i]!=sura1[i])
     {
         cout<<sura[i]<<endl;
         break;
     }
 }
  for(i=0;i<n;i++)
{
     if(sura1[i]!=sura2[i])
     {
         cout<<sura1[i]<<endl;
         break;
     }
 }



}
