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
long long l,r;
vector<long long>sura;
for(long long i=0;i<n;i++)
{
   long long k;
   cin>>k;
   sura.push_back(k);
}
l=1;
r=n-1;
long long alice=0,bob=0,move=0;
alice+=sura[0];
move++;
long long last=sura[0];
while(l<=r)
{
   long long now=0;
   if(move%2==0)
   {
      while(l<=r && now<=last)
      {
         alice+=sura[l];
         now+=sura[l];
         l++;
      }
   }
   if(move%2!=0)
   {
      while(l<=r && now<=last)
      {
         bob+=sura[r];
         now+=sura[r];
         r--;
      }
   }
   last=now;
   move++;
  
}
cout<<move<<" "<<alice<<" "<<bob<<endl;

 
 }
}