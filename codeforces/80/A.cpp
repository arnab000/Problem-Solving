#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j,m=0,n,l=0,x;
    cin>>n>>x;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            m++;
        }

    }
    if(m!=1)
    cout<<"NO";

else{
    for(i=n+1;i<=x;i++)
    {
        m=0;
        for(j=1;j<i;j++)
         {
            if(i%j==0)
        {
            m++;
        }

         }

         if(m==1)
            l++;

    }


    if(l==1)
        cout<<"YES";
    else cout<<"NO";
}
}
