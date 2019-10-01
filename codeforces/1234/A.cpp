#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            ans+=k;
        }
        long long haha=ceil((ans*1.0)/n);
        cout<<haha<<endl;
    }
}
