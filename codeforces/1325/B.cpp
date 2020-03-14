#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long test;
  cin>>test;
  while(test--)
  {
     long long n;
     set<long long>s;
     cin>>n;
     for(long long i=0;i<n;i++)
     {
         long long k;
         cin>>k;
         s.insert(k);
     }
     cout<<s.size()<<endl;


  }
}
