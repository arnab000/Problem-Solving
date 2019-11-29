#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    vector<long long>sura;
    for(int i=0;i<3;i++)
    {
        long long k;
        cin>>k;
        sura.push_back(k);
    }
    sort(sura.begin(),sura.end());
    if(sura[0]+sura[1]>sura[2])
    {
        cout<<(sura[0]+sura[1]+sura[2])/2<<endl;
    }
    else
        cout<<sura[0]+sura[1]<<endl;


    }
}
