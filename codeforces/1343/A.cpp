#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;
    long long t=1;
    long long hoga=1;
    vector<long long >dp;

    while(t<2000000000){
    t=t*2;
    hoga+=t;

    dp.push_back(hoga);


    }

    while(test--) {
    long long n;
    cin>>n;
    long long ans;
    vector<long long> sura;
    for(long long i=0;i<dp.size();i++)
    {
    if(n%dp[i]==0)
    {
    ans=(n/dp[i]);
    break;
    }
    }
    cout<<ans<<endl;





    }

}
