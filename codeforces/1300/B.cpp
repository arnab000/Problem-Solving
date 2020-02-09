#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        vector<long long>sura;
        long long n;
        cin>>n;
        for(long long i=0;i<2*n;i++)
        {
            long long k;
            cin>>k;
            sura.push_back(k);

        }
        sort(sura.begin(),sura.end());
        cout<<abs(sura[n-1]-sura[n])<<endl;
    }
}
