#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==d && a==0 && c>0 )
    {
        cout<<0<<endl;
    }
    else if(a==d)
    {
        cout<<1<<endl;
    }
    else
        cout<<0<<endl;
}
