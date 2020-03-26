#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n,m;
        cin>>n>>m;
        long long k=n%m;
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<m-k<<endl;

    }
}
