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
         long long ans=n/2;
         cout<<ans-1<<endl;
     }
     else
     {
             long long ans=n/2;
         cout<<ans<<endl;
     }

    }
}
