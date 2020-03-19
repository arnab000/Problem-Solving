#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(long long i=0;i<n-2;i++)
        {
            cout<<3;
        }
        cout<<2<<3<<endl;
    }
}