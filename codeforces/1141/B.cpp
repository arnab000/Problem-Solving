
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m,i,j,p=0,sura=-1;
  vector<long long>v;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>m;
      v.push_back(m);
      if(m==1)
        p++;


  }
  if(p==0)
  {
      cout<<0<<endl;
      return 0;
  }

 for(i=0;i<n;i++)
  {

      v.push_back(v[i]);

  }
 for(i=0;i<n;i++)
  {

     p=1;
     while(v[i]==v[i+1] && v[i]==1)
     {
         p++;
         i++;
     }
     sura=max(sura,p);

  }
  cout<<sura<<endl;




}
