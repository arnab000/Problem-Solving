#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long i,j,x,n,m,temp,sum=0;
    cin>>n>>m;
    int ch[n];
    for(i=0;i<n;i++)
    {
       cin>>ch[i];
    }
 sort(ch,ch+n);
     for(i=0;i<n;i++)
    {
       sum+=ch[i]*m;
       if(m!=1)
        m--;
    }
    cout<<sum;
    }

