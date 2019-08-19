#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    long long minuscounter=0;
    long long pluscounter=0;
    long long zerocounter=0;
    long long ans=0;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>k;
        if(k<0)
        {
           ans+=((k)*(-1))-1;
           minuscounter++;
        }

        else if(k==0)
        {
           ans+=1;
           zerocounter++;


        }
        else if(k>0)
        {
             ans+=k-1;
            pluscounter++;
        }
        //cout<<ans<<endl;

    }
   // cout<<ans<<endl;
    if(minuscounter%2!=0 && zerocounter<1)
    {
        ans+=2;
    }
    cout<<ans<<endl;
}
