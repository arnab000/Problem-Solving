#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long test;
    cin>>test;
    while (test--)
    {
        long long n;
        vector<long long>sura;
        cin>>n;
        long long e=1;
        for(long long i=1;i<=n;i++)
        {
             e=e*2;
             sura.push_back(e);
        }
        long long ans=0,ans1=0;
        for(long long i=0;i<n/2-1;i++)
        {
           ans+=sura[i];
        }
        ans+=sura[n-1];
         for(long long i=n/2-1;i<n-1;i++)
        {
           ans1+=sura[i];
        }
        cout<<ans-ans1<<endl;


    }
    



}