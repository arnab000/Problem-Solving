#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k,max1=-1,max2=-1,l;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
        if(max1<=v[i])
          max1=v[i];
    }
     for(i=0;i<=n-1;i++)
    {
        l=1;
       while(v[i]==max1 && v[i]==v[i+1])
       {
           l++;
           i++;
           if(i==n-1)
           break;

       }
       if(max2<=l)
        max2=l;

    }
    cout<<max2<<endl;




}
