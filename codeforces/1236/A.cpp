#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,z,ans=0;
        cin>>x>>y>>z;
        if(y==0){
            cout<<0<<endl;
            continue;
        }

        while(y>0 && z>1)
        {
            y--;
            z=z-2;
            ans+=3;

        }
         while(x>0 && y>1)
        {
            x--;
            y=y-2;
            ans+=3;

        }
        cout<<ans<<endl;



    }

}
