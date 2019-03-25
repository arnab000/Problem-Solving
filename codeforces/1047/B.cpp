#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a,b,n,i,j,sum;
    vector<long long>sura;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sura.push_back(a+b);
    }
    sort(sura.begin(),sura.end());
    cout<<sura[n-1]<<endl;

}
