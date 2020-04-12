#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n;
        vector<long long>sura;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            sura.push_back(k);
        }
        sort(sura.begin(),sura.end());
        vector<long long>ans;
        if(n%2==0){
        for(long long i=0;i<n/2;i++)
        {
            ans.push_back(sura[i]);
            ans.push_back(sura[n-i-1]);
        }
        reverse(ans.begin(),ans.end());
        for(long long i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


        }
        else if(n%2!=0){
        for(long long i=0;i<=n/2;i++)
        {

            if(i==(n/2))
            {
               ans.push_back(sura[i]);
            }
            else
            {
                ans.push_back(sura[i]);
            ans.push_back(sura[n-i-1]);
            }
        }
        reverse(ans.begin(),ans.end());
        for(long long i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


        }
    }
}
