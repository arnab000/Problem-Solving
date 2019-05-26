#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,a,b,x,y,i,j;
  cin>>n>>a>>x>>b>>y;
  while(1)
  {
      a++;
      b--;
      if(a>n)
        a=1;
      if(b<=0)
        b=n;
      if(a==b)
      {
          cout<<"YES"<<endl;
          return 0;
      }
      if(a==x)
        break;
      if(b==y)
        break;
  }
  cout<<"NO"<<endl;
}
