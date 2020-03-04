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
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        sum+=k;
    }
    cout<<min(sum,m)<<endl;
}


}
