#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;



    while(test--) {
   long long n;
   cin>>n;
   vector<long long>ans1,ans2;
   long long d=n/2;
   if(d%2!=0)
   {
   cout<<"NO"<<endl;
   continue;

   }
   cout<<"YES"<<endl;
 for(long long i=1;i<=n;i++)
 {

 if(i%2==0)
 ans1.push_back(i);
 else
 ans2.push_back(i);
 }
 d--;
 ans2[ans2.size()-1]=n+d;
 for(long long j=0;j<ans1.size();j++)
 {

 cout<<ans1[j]<<" ";
 }
  for(long long j=0;j<ans2.size();j++)
 {

 cout<<ans2[j]<<" ";
 }
 cout<<endl;





    }

}
