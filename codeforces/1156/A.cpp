#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,n,ans=0;
  cin>>n;
  vector<int>sura;

  for(i=0;i<n;i++)
  {
      cin>>k;
      sura.push_back(k);

  }
   for(i=0;i<n-1;i++)
  {

      if((sura[i]==1 && sura[i+1]==2) || (sura[i]==2 && sura[i+1]==1))
      {
          ans+=3;
      }
      else if((sura[i]==1 && sura[i+1]==3) || (sura[i]==3 && sura[i+1]==1))
      {
          ans+=4;
      }
     else if((sura[i]==3 && sura[i+1]==2) || (sura[i]==2 && sura[i+1]==3))
     {
         cout<<"Infinite"<<endl;
         return 0;
     }
     if(sura[i]==3 && sura[i+1]==1 && sura[i+2]==2 && i+2<n)
        ans--;

  }
  cout<<"Finite"<<endl;
  cout<<ans<<endl;



}
