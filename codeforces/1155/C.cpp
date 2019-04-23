
#include<bits/stdc++.h>
using namespace std;
int main()
{
 unsigned long long n,m,k,i,j,sum,dada=0;
 vector<unsigned long long>sura;
 vector<unsigned long long>s;
 vector<unsigned long long>hehe;
 cin>>n>>m;
 for(i=0;i<n;i++)
 {
     cin>>k;
     sura.push_back(k);
 }
 for(i=0;i<m;i++)
 {
     cin>>k;
     hehe.push_back(k);
 }
 for(i=0;i<n-1;i++)
 {
     s.push_back(sura[i+1]-sura[i]);

 }
 if(s.size()==1)
 {
     sum=s[0];
 }
 else {
 sum=__gcd(s[0], s[1]);
for(i=2;i<s.size();i++)
 {

     sum=__gcd(sum, s[i]);
 }
 }
  for(i=0;i<m;i++)
 {
    if(hehe[i]==1 || hehe[i]==sum || sum%hehe[i]==0)
    {
        dada=i+1;
        break;
    }
 }
if(dada==0)
 cout<<"NO"<<endl;
 else
 {
     cout<<"YES"<<endl;
     cout<<sura[0]<<" "<<dada<<endl;
 }
}
