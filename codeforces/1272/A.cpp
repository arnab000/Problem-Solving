#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        vector<long long>sura;
        for(int i=0;i<3;i++)
        {
            long long k;
            cin>>k;
            sura.push_back(k);
        }
        sort(sura.begin(),sura.end());
        long long p=abs(sura[2]-sura[0]);
        long long q=abs(sura[2]-sura[1]);
        long long h=abs(sura[1]-sura[0]);
        if(p+q+h-4>0)
            cout<<p+q+h-4<<endl;
        else
            cout<<0<<endl;

    }
}
