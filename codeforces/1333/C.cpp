#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;

    map<long long, long long> ma;
    long long ans=0, sum=0;
    ma[sum]=0;
    long long sura=1;

    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        sum += x;
        if(ma.count(sum))
        sura= max(sura,ma[sum]+2);
        ma[sum] = i;
        ans += i-sura+1;
    }
    cout<<ans<<endl;
}
