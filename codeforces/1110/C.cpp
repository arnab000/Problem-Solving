#include<bits/stdc++.h>
using namespace std;
int pow1( long x,long y)
{ long j=1;
    for(long i=0;i<y;i++)
    {
        j*=x;
    }
    return j;
}


int main()
{
    long i,j,n,m=0,l,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l;
        long u=l;
        m=0;
        int k=0;
        while(l>0)
        {
            x=l%2;
            //cout<<x;
            if(x==1)
                k++;
            l=l/2;
            m++;



        }

        if(k==m)
            {long hh=1;
            long sura=0;
             for(long aa=2;aa<sqrt(u);aa++)
             {
                if(u%aa==0)
                    sura=u/aa;
                if(sura>hh)
                    hh=sura;


             }
            cout<<hh<<endl;
            }
        else
            cout<<pow1(2,m)-1<<endl;
    }


}
