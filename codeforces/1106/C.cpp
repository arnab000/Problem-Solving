#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,sum=0;
    cin>>n;
    vector<long long >sura;
    for(long long i=0;i<n;i++)
    {
        cin>>m;
        sura.push_back(m);
    }
    sort(sura.begin(),sura.end());
    long long j=n-1;
    for(long long i=0;i<n/2;i++)
    {
        long long v=(sura[i]+sura[j])*(sura[i]+sura[j]);
        sum+=v;
        j--;
    }
    cout<<sum<<endl;

}
