#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,j,x,y,z,p,q;

            cin>>a>>b>>c;

      if(c%a==0 || c%b==0)
        cout<<"Yes"<<endl;
       else{
          int  l=0;
      while(c>=b)
      {
          c=c-a;
          if(c%b==0)
          {
              l++;
              break;
          }}
          if(l>0)
            cout<<"Yes"<<endl;
          else cout<<"No"<<endl;


      }

}