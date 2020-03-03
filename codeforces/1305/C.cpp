#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,m;
cin>>n>>m;
vector<long long>sura;
vector<long long>mura;
long long ans=1;
for(long long i=0;i<n;i++)
{
    long long k;
    cin>>k;
    sura.push_back(k);
}
if(n>m)
{
    cout<<0<<endl;
}
else
{
    for(long long i=0;i<n;i++)
{
    for(long long j=i+1;j<n;j++)
    {
        ans=(((abs(sura[i]-sura[j]))%m)*(ans%m))%m;
    }
}
cout<<ans<<endl;
}


}
