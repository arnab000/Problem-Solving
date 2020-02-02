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
        vector<long long>ans;
        long long baal=0;
        bool hbe =false;
        for(long long i=0;i<n;i++)
        {
            char k;
            cin>>k;
            long long h=(k-'0');
            if(h%2!=0)
            {
                baal++;
                ans.push_back(h);
            }
            if(baal==2)
            {
                hbe=true;
                //break;

            }
        }
        if(hbe )
        {
            for(long long i=0;i<2;i++)
            {
                cout<<ans[i];
            }
            cout<<endl;
        }
        else
            cout<<-1<<endl;

    }
}
