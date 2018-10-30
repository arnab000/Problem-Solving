#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s=0;
        cin>>n;
        s=n*(n+1)/2;
        //if(n>=1)
           // s=-1;
        
        for(long long i=2;i<=n;i*=2)
        {
            s-=(i*2);
        }
        cout<<s-2<<endl;
    }
}
