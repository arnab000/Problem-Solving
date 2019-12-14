#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n,x,ans=0,c=0,d;
        cin>>n;
        x=n;
        while(n!=0)
        {
        if((n/10)==0)
           d=n;
            c++;
            n=n/10;
        }

        ans+=(c-1)*9;
//cout<<c<<endl;

         long long s=d;
        for(long long i=0;i<c-1;i++)
        {
            s=((s*10)+d);
        }
        //cout<<s<<endl;
      if(s>x)
        ans+=(d-1);
      else
        ans+=d;

        cout<<ans<<endl;

    }

}
