#include <iostream>
#include <cmath>
 
using namespace std;
 
int n,k,t;
int fr[10001];
long long sum;
 
int main()
{
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>n>>k;
 
        int ok=1;
 
        for(int i=0; i<=100; i++)
            fr[i]=0;
 
        for(int i=1; i<=n; i++)
        {
            long long x;
            cin>>x;
            //cout<<x<<" ";
            long long nr=1,p=0;
 
            while(nr<x)
            {
                nr*=k;
                p++;
            }
 
            if(nr>x)
            {
                nr/=k;
                p--;
            }
 
            //cout<<nr<<endl;
 
            while(p>=0 && x>0)
            {
                if(fr[p]==0 && x-nr>=0)
                {
                    fr[p]=1;
                    x=x-nr;
                }
               // cout<<x<<endl;
                nr/=k;
                p--;
            }
 
            if(x!=0)
                ok=0;
        }
 
        if(ok==0)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
 
    }
    return 0;
}