#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 long long test;
 cin>>test;
 while(test--)
 {
 
long long n,k;
cin>>n>>k;
long long x=n-1;

if(k%x==0)
{
  cout<<n*(k/x)-1<<endl;
}
else
{
   cout<<n*(k/x)+(k%x)<<endl;
}

     
  

 
  
 
 }
}