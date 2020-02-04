#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
while(n--)
{
    long long k;
    cin>>k;
    long long ans=k;
    long long h=k;
       long long n=k;
   while(1)
   {
       long long n=k/10;
       if(n==0)
        break;
       long long h= k%10;
       ans+=n;
       h+=n;
       k=h;

   }
   cout<<ans<<endl;

}

}
