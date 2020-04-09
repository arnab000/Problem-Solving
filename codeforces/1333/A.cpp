#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long x,y;
        cin>>x>>y;
        cout<<"W";
        for(long long i=0;i<y-1;i++)
        {
            cout<<"B";
        }
        cout<<endl;
        for(long long i=0;i<x-1;i++)
        {
            for(long long j=0;j<y;j++)
            {
                cout<<"B";
            }
            cout<<endl;
        }

    }
}
