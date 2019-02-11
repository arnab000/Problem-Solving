#include<bits/stdc++.h>
using namespace std;
int main ()
{
int x,y,z,a,b,c;
cin>>x>>y>>z;
cin>>a>>b>>c;
if(a<x)
  cout<<"NO"<<endl;
else if(a+b-x<y)
   cout<<"NO"<<endl;
else if(a+b+c-x-y<z)
    cout<<"NO"<<endl;
 else
    cout<<"YES"<<endl;


}
