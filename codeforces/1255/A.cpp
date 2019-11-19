#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long a,b,n;
        cin>>a>>b;
    n=abs(a-b);
        long long ans=0;

            if(n>=5)
            {
                ans+=(n/5);
                n=(n%5);
            }
             if(n>=2)
            {
                ans+=(n/2);
                n=(n%2);
            }
             if(n)
            {
                ans+=n;

            }

        cout<<ans<<endl;
    }
}
