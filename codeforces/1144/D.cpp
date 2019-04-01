#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,k,l,n,bal=-1,v,m,op=0;
 vector<int>sura;
 vector<int>sura2;
 cin>>n;
 if(n==1)
 {
     cout<<"0"<<endl;
     return 0;
 }
 for(i=0;i<n;i++)
 {
     cin>>k;
     sura.push_back(k);
     sura2.push_back(k);
 }
sort(sura.begin(),sura.end());
for(i=0;i<n-1;i++)
{
    l=1;
    while(sura[i]==sura[i+1] && i<n-1)
    {
        l++;
        i++;
    }
    if(l>bal)
    {
      v=sura[i];
      bal=l;
    }
}
 for(i=0;i<n;i++)
 {
    if(sura2[i]==v)
    {
       m=i;
       break;
    }
 }
// cout<<m<<endl;
 for(i=0;i<n;i++)
 {
    if(sura[i]==v)
    {
      op++;
    }
 }
 cout<<n-op<<endl;
 if(n-op>0)
 {
     for(i=m;i>=0;i--)
 {
     if(sura2[i]!=v)
    {
        if(sura2[i]<v)
      cout<<1<<" "<<i+1<<" "<<i+2<<endl;
      else
         cout<<2<<" "<<i+1<<" "<<i+2<<endl;
    }
 }
     for(i=m;i<n;i++)
 {
     if(sura2[i]!=v)
    {
        if(sura2[i]>v)
      cout<<2<<" "<<i+1<<" "<<i<<endl;
      else
        cout<<1<<" "<<i+1<<" "<<i<<endl;
    }
 }

 }


}
