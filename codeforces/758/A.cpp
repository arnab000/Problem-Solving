#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j=0,m,k;
    cin>>m;
    int a[m];

    for(i=0;i<m;i++)
    {
        cin>>a[i];



    }
    k=a[0];

    for(i=0;i<m;i++)
    {
       if(k<a[i])
        k=a[i];


    }


    for(i=0;i<m;i++)
    {
        j=j+(k-a[i]);
    }
    cout<<j;


}
