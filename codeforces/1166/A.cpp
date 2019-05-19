#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,sum=0;
    string sura;
    int arr[300]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>sura;
        arr[sura[0]]++;
    }
    for(i=0;i<300;i++)
    {
      if(arr[i]>2)
      {
          int y=arr[i]/2;
          int x= arr[i]-y;
          if(y>=2)
            sum+=(y*(y-1))/2;
          if(x>=2)
            sum+=(x*(x-1))/2;

      }
    }
    cout<<sum<<endl;
}
