#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,b,c,n,sum=0;
    vector<pair<long,long> >sura;
    vector<long long>upperbound;
    vector<long long>lowerbound;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        upperbound.push_back(a);
        lowerbound.push_back(b);
        sura.push_back(make_pair(a-b,i));
    }
    sort(sura.begin(),sura.end());
    j=0;
    for(i=n-1;i>=0;i--)
    {

        long long l=sura[i].second;

        sum+=upperbound[l]*(j)+lowerbound[l]*(n-j-1);
        j++;
    }
    cout<<sum<<endl;




}
