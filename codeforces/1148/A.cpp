#include<bits/stdc++.h>
      // for vector

using namespace std;

int main ()
{
  long long n,m,a,ans;
  cin>>n>>m>>a;
  ans=2*min(n,m)+2*a;
  if(m>n)
    ans+=1;
  else if(n>m)
    ans+=1;
  cout<<ans<<endl;


}
