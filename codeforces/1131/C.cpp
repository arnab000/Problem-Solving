#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,l,k;
    vector<int>sura;
  
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        sura.push_back(k);

    }
    sort(sura.begin(),sura.end());
     for(i=0;i<n;i++)
   {
       if(i%2==0)
        cout<<sura[i]<<" ";
   }
     for(i=n-1;i>0;i--)
   {
       if(i%2!=0)
        cout<<sura[i]<<" ";
   }

}
