#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long x,y=-1,i,j,k,l=1,next=0,n;
 vector<long long>sura;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>k;
     sura.push_back(k);
 }
 sort(sura.begin(),sura.end());
 for(i=0;i<n;i++)
 {
     next=i;
     l=1;
     j=i+1;
     while(sura[j]-sura[i]<=5 && j<n)
     {
         l++;
         if(sura[i]==sura[j]){
            next=j;
         }

         j++;


     }
    // cout<<next<<endl;
     i=next;

     //cout<<l<<endl;

     y=max(y,l);

 }
 cout<<y<<endl;


}
