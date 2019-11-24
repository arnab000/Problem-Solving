#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    cin>>test;
    while(test--){
            long long n,ans;
        cin>>n;

        vector<long long > sura;
        vector<long long > sura2;

        for(long long i=0;i<n;i++){
            long long l,r;
            cin>>l>>r;
            sura.push_back(l);
            sura2.push_back(r);
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(sura.begin(),sura.end());
        sort(sura2.begin(),sura2.end());
        ans=sura[n-1]-sura2[0];
        if(ans>0)
            cout<<ans<<endl;
        else
            cout<<0<<endl;
    }
}
