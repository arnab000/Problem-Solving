#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d,x,y;

        cin>>a>>b>>c>>d;
        long long f=d/c;
        if(f<=a)
        {
            x=d-(c*f);
            if(x<=b)
            {
                cout<<"Yes"<<endl;
                continue;
            }
        }
        else
        {
             x=d-(c*a);
            if(x<=b)
            {
                cout<<"Yes"<<endl;
                continue;
            }
        }
        cout<<"No"<<endl;
    }
}
