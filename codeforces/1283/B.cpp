#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
       long long x,y;
       cin>>x>>y;
       long long ans=0;
       ans+=(x/y)*y;
       x-=ans;
       if(y/2>=x)
        ans+=x;
        else
            ans+=(y/2);
        cout<<ans<<endl;

    }
}
