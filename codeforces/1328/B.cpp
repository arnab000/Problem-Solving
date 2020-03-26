#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    vector<long long >v;
    v.push_back(1);
    for(long long i=2;i<100000;i++)
    {
        v.push_back(v[i-2]+i);
    }
//cout<<v[v.size()-1]<<endl;
    while(test--)
    {
       long long n,m;
       cin>>n>>m;
       string ans;
        vector<long long>::iterator lower,upper;
        lower=lower_bound(v.begin(),v.end(),m);
        long long u=lower-v.begin();
        u++;
        long long ans1=n-u;
        long long ans2=ans1+abs(v[u-1]-m)+1;
        for(long long i=1;i<=n;i++)
        {
            if(i==ans1 || i==ans2)
                ans+='b';
            else
                ans+='a';
        }
        cout<<ans<<endl;



    }
}
