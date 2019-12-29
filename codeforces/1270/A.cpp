
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        bool jitse=false;

        for(int i=0;i<y;i++)
        {
            int k;
            cin>>k;
            if(k==x)
                 jitse=true;
        }
                for(int i=0;i<z;i++)
        {
            int k;
            cin>>k;

        }
        if(jitse==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
