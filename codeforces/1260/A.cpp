#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,n;
        cin>>x>>y;
        if(y<=x)
        {
            cout<<y<<endl;
            continue;
        }
        else if(y%x==0)
        {
            long long h=(y/x)*(y/x)*x;
            cout<<h<<endl;
            continue;
        }
        else if(y%x!=0)
        {
            long long k=ceil(y*1.0/x);
          //  cout<<k<<" "<<y%x<<endl;
            long long h=(y%x)*k*k;
            long long p=(y/x)*(y/x)*(x-(y%x));
            cout<<h+p<<endl;
            continue;
        }
    }
}
