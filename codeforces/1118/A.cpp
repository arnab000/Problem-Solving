
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n;
 cin>>n;
 while(n--)
 {
     long long int t,i,j,k,l;
     cin>>k>>i>>l;
     t=k*i;
     if(k%2==0)
     {
         j=(k/2)*l;
     }
     else if(k%2!=0)
     {
         j=(k/2)*l+i;
     }
     if(j>t)
        cout<<t<<endl;
     else if(t>j)
        cout<<j<<endl;
     else if(t==j)
       cout<<j<<endl;


 }

}
