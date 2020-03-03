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
    vector<long long>sura;
    vector<long long>mura;

    for( long long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        sura.push_back(k);
    }
     for( long long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        mura.push_back(k);
    }
    sort(sura.begin(),sura.end());
    sort(mura.begin(),mura.end());
    for( long long i=0;i<n;i++)
    {
       cout<<sura[i]<<" ";
    }
    cout<<endl;
     for( long long i=0;i<n;i++)
    {
         cout<<mura[i]<<" ";
    }
    cout<<endl;
}




}
