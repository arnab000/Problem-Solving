
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
      if(n%2==0)
      {
          for(long long i=0;i<n/2;i++)
          {
              cout<<1;
          }
          cout<<endl;
      }
      else{
        cout<<7;
        n=n-3;
         for(long long i=0;i<n/2;i++)
          {
              cout<<1;
          }
          cout<<endl;

      }

    }
}
