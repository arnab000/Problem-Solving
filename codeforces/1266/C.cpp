#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,c;
    cin>>r>>c;
    if(r==1 && c==1)
        cout<<0<<endl;
    else if (r==1 )
    {
        for(long long i=1;i<=c;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    else if(c==1)
    {
         for(long long i=1;i<=r;i++)
        {
            cout<<i+1<<endl;
        }
       
    }
    else
    {
        for(long long i=1;i<=r;i++)
        {
            for(long long j=1;j<=c;j++)
            {
                cout<<i*(j+r)<<" ";
            }
            cout<<endl;
        }
    }

}
