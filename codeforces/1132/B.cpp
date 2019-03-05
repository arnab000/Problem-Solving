#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,x,sum=0;
    vector<long long>sura;


    cin>>a;
    for(long long i=0;i<a;i++)
    {
        cin>>x;
        sura.push_back(x);

        sum+=x;
    }
    
    cin>>b;
    sort(sura.begin(),sura.end(),greater <int>());

    for(long long i=0;i<b;i++)
    {
        long long k;
        k=sum;
        cin>>x;
        k=k-sura[x-1];
        cout<<k<<endl;
    }

}
