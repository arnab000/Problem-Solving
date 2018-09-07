#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    unsigned long long n,m,k,f,l;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n>>m>>k;
        if(n==m)
            f=0;
        else if(n>m)
            f=(n-m);
        else if(m>n)
            f=(m-n);


        if(k<n || k<m)
            cout<<"-1"<<endl;
        else
        {
            if(n%2==0)
           {
            if(f%2==0 && k%2==0)
                cout<<k<<endl;
            else if(f%2!=0 && k%2==0)
                cout<<k-1<<endl;
            else if(f%2==0 && k%2!=0)
                cout<<k-2<<endl;
            else if(f%2!=0 && k%2!=0)
                cout<<k-1<<endl;
           }
           else if(n%2!=0)
           {
            if(f%2==0 && k%2==0)
                cout<<k-2<<endl;
            else if(f%2!=0 && k%2==0)
                cout<<k-1<<endl;
            else if(f%2==0 && k%2!=0)
                cout<<k<<endl;
            else if(f%2!=0 && k%2!=0)
                cout<<k-1<<endl;
           }


        }

    }
}