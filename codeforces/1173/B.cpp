
#include <bits/stdc++.h>
using namespace std;



int main()
{
 int x,i;
 cin>>x;
 if(x==1)
    {
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    if(x==2)
    {
         cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
        return 0;
    }
    if(x==3)
    {
         cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<2<<endl;
        return 0;
    }

 cout<<floor(x/2.0)+1<<endl;
       cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
         cout<<2<<" "<<2<<endl;
        for(i=4;i<=x;i++)
        {
            int g=i-1;
             cout<<ceil(g/2.0)+1<<" ";
             if(g%2!=0)
             {
                 cout<<(g+1)/2<<endl;
             }
             if(g%2==0)
             {
                 cout<<(g/2)+1<<endl;
             }
        }


}
