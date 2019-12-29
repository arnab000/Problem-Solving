
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
      int n;
      cin>>n;
      long long sum=0;
      long long x=0;

      for(int i=0;i<n;i++)
      {
          long long k;
          cin>>k;
          sum+=k;
          x^=k;
      }
      cout<<2<<endl;
      cout<<x<<" "<<(sum+x)<<endl;

    }
}
