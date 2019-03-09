#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,j,k,l,n,ans=0;
  cin>>n>>k;
  long long arr[n];
  long long a[k+1]={0};
  for(i=0;i<n;i++)
  {
      cin>>l;
      a[l%k]++;

  }


 if(k%2==0  )
  {
       for(i=1;i<k/2;i++)
       {
           //cout<<a[i]<<" "<<a[k-i]<<endl;
           ans+=(2*min(a[i],a[k-i]));
       }
       ans=ans+2*(a[0]/2)+2*(a[k/2]/2);


  }
 else
 {
      for(i=1;i<=k/2;i++)
       {
           // cout<<a[i]<<" "<<a[k-i]<<endl;
           ans+=2*min(a[i],a[k-i]);
       }
       ans=ans+2*(a[0]/2);
 }
 //cout<<a[i]<<" "<<a[k-i];
  cout<<ans<<endl;

}
