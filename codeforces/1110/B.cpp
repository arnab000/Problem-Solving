#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans=0;
    long m;
    cin>>n>>m>>k;
    long long b[n];
    vector<long long>v;
    if(n==k)
        cout<<n<<endl;

    else
    {
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n-1;i++)
        {
            int x=b[i+1]-b[i]-1;
            v.push_back(x);
        }
        sort(v.begin(),v.end());


        for(int i=0;i<n-k;i++)
        {
            ans+=v[i];
        }

        cout<<ans+n;
    }
}