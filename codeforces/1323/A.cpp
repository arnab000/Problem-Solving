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
      long long even=0,odd=0;
      long long e;
      vector<long long>o;
      for(long long i=0;i<n;i++)
      {
          long long k;
          cin>>k;
          if(k%2==0)
          {
              even++;
              e=i+1;
          }
          else
          {
              odd++;
              o.push_back(i+1);

          }
      }
      if(odd<2 && even<1)
      {
          cout<<-1<<endl;
      }
      else if(even>0)
      {
          cout<<1<<endl;
          cout<<e<<endl;

      }
      else if(odd>1)
      {
           cout<<2<<endl;
         for(long long j=0;j<2;j++)
         {
             cout<<o[j]<<" ";
         }
         cout<<endl;
      }
  }
}
