#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long x,y,z,m;
  cin>>x>>y>>z>>m;
  bool ans=false;
  long long win,lose,draw;
  for(long long i=0;i<z;i++ )
  {
      long long h=y-m*i;
    //  cout<<h<<endl;
      long long k=h/z;
      if(h%z==0 && k+i<=x && h>=0)
      {
          draw=i;
          win=h/z;
          lose=x-(draw+win);
          ans=true;
          break;

      }
  }
  //cout<<ans<<endl;
  if(ans)
    cout<<win<<" "<<draw<<" "<<lose<<endl;
  else
    cout<<-1<<endl;

}
