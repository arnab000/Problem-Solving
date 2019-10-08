#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--){

    long long x,y,z;
    cin>>x>>y;
    z=max(x,y)-min(x,y);
    if(z==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }


}
