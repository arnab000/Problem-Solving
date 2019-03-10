#include<bits/stdc++.h>
using namespace std;
long long sum(long long x)
{
    long long n,h,g;
    if(x%2==0){
      n=x/2;
       h=n*n;
    }
    if(x%2!=0)
    {
       n=(x+1)/2;
       h=n*n;
    }
    g=((x*(x+1))/2)-h;
    return h*(-1)+g;

}
int main()
{
long long n,i,j,k,l,r;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>l>>r;
    k=sum(l-1);
    j=sum(r);
    cout<<j-k<<endl;
}

}
