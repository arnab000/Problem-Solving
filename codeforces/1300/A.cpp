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
        long long sum=0;
        long long ans=0;
        vector<long long>sura;
        for(long long i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            if(k==0){
                    sura.push_back(k+1);
                ans++;
            }
            else
            sura.push_back(k);

        }
                for(long long i=0;i<n;i++)
        {
        sum+=sura[i];
        }
        if(sum==0)
            ans++;
        cout<<ans<<endl;
    }
}
