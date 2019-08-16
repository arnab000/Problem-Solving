#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k,i,l=-1;
  long long sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        l=max(k,l);
        sum+=k;


    }
   long long  sum2=sum-l;
   if(sum%2==0 && sum2>=l)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }



}
