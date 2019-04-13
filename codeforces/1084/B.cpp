#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long i,j,n,k,x=2000000000,d=0,sum=0;
 cin>>n>>j;
 vector<int>sura;
 for(i=0;i<n;i++)
 {
     cin>>k;
     if(k<x)
        x=k;
     d+=k;
     sura.push_back(k);
 }
 if(d<j)
 {
     cout<<-1<<endl;
     return 0;
 }
for(i=0;i<n;i++)
 {
     sum+=(sura[i]-x);

 }
 if(sum>=j)
 {
     cout<<x<<endl;
     return 0;
 }
if(sum<j)
{
    long long y=ceil((j-sum)/(n*1.0));
    cout<<x-y<<endl;
}



}
