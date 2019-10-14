#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c,d,e;
      cin>>a>>b>>c>>d>>e;
      int h=ceil(a*1.0/c*1.0);
      int k=ceil(b*1.0/d*1.0);
      if(h+k<=e)
      {
          cout<<h<<" "<<k<<endl;

      }
      else
        cout<<-1<<endl;

    }
}
