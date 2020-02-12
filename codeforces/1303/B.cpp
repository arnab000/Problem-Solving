#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
       long long n,g,b;
       cin>>n>>g>>b;
if(n<=g)
{
    cout<<n<<endl;
    continue;
}

       long long m,k;
       if(n%2==0)
       {
           m=n/2;
       }
       else
       {
           m=n/2+1;
       }
       k=n-m;
       long long h1,h2;
      if(m%g==0)
      {
          h1=m/g;
      }
      else
      {
          h1=m/g+1;
      }
     // cout<<h1<<endl;
      long long ans=((h1-1)*g)+((h1-1)*b);
      ans+=(m-((h1-1)*g));

       if(ans<n)
       {
           ans+=(n-ans);
       }
       cout<<ans<<endl;
    }
}
