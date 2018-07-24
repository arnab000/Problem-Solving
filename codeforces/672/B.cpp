#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p=0,y,z,n,i ;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n>26)
        cout<<"-1";
    else{
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        while(i<n-1 && a[i]==a[i+1])
            i++;

    p++;

    }


   y=n-p;
   cout<<y;

    }


}




