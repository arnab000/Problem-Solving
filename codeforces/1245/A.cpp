#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        int t=__gcd(x,y);
        if(t>1)
        {
            cout<<"Infinite"<<endl;

        }
        else
            cout<<"Finite"<<endl;
    }
}
