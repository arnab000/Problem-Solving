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
 set<long long>sura;
 for(long long i=0;i<n;i++)
 {

   long long k;
   cin>>k;
   long long a=k+i;
   sura.insert(((a%n)+n)%n);


 }
 if(sura.size()==n)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;
 


 }
}

