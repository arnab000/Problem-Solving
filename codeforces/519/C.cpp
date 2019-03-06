#include<bits/stdc++.h>
using namespace std;
int main()
{
 long   n,j,i=0,k,l,x,y;
cin>>k>>l;

while(l>0 && k>0){
    if(l==1 && k==1)
        break;

   if(k>=l)
   {
      l=l-1;
      k=k-2;

   }
   else if(l>=k)
   {
      k=k-1;
      l=l-2;

   }
i++;





}
cout<<i<<endl;



}
