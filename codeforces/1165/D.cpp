#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        memset(arr,0,sizeof(arr));
        vector<long long>sura;
        for(int i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            sura.push_back(k);
            arr[k]=1;

        }
        sort(sura.begin(),sura.end());
        long long ans=sura[0]*sura[n-1];
        bool hbe=true;
        int c=0;
        for(int i=2;i<=sqrt(ans);i++)
        {
            if(ans%i==0)
            {
                long long p=(ans/i);
                if(p==i)
                    c++;
                else
                    c+=2;
                    
                if(!arr[i] || !arr[p])
                {
                   hbe=false;
                 
                }
            }
        }
        if(!hbe || c!=n)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;

    }

}
