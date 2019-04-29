#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,l=0,k=0,sura;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>sura;
        if(sura==1)
            l++;
        else
            k++;

    }


    if(l==0)
    {
       for(i=0;i<k;i++)
        {
            cout<<2<<" ";
        }
        for(i=0;i<l;i++)
        {
            cout<<1<<" ";
        }
        return 0;
    }
    if(l<3)
    {
        if(k>0)
        cout<<2<<" ";
        cout<<1<<" ";
        for(i=0;i<k-1;i++)
        {
            cout<<2<<" ";
        }
        for(i=0;i<l-1;i++)
        {
            cout<<1<<" ";
        }
    }
    else if(l>=3)
    {
          cout<<1<<" ";
           cout<<1<<" ";
         cout<<1<<" ";
        for(i=0;i<k;i++)
        {
            cout<<2<<" ";
        }
        for(i=0;i<l-3;i++)
        {
            cout<<1<<" ";
        }
    }
}
