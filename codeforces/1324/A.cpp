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
    long long p=-1;
    for(long long j=0;j<n;j++)
    {
        long long k;
        cin>>k;
        sura.push_back(k);
        p=max(p,k);
 
    }
    bool hbe=true;
 
    for(long long j=0;j<n;j++)
    {
 
       if((sura[j]-p)  %2!=0)
        hbe=false;
 
    }
    if(hbe)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
 
}
 
 
 
}