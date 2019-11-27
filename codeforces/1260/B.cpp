#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        long long n,m,x,y;
        cin>>x>>y;
        n=min(x,y);
        m=max(x,y);
        if((n+m)%3==0 && 2*n>=m)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
