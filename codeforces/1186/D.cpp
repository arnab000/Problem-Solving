
#include<bits/stdc++.h>


using namespace std ;

int main()
{
  int n,i=0;
  double e=0,b=0,error=0;
  cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>e;

    if(error<0)
        b=ceil(e);
    else
        b=floor(e);
    error+=b-e;
    cout<<(int)b<<endl;
    //cout<<error<<endl;
 }

   return 0;
}
