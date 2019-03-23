#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,k,l,s1=0,s2=0,s3=0;

  cin>>k;

  for(i=0;i<k;i++)
  {
      cin>>l;
      if(l>0)
        s1++;
      else if(l<0)
        s2++;
      else if(l==0)
        s3++;



  }
  float sura= ceil(k*1.0/2);

  if(s1>=sura)
    cout<<1<<endl;
  else if(s2>=sura)
    cout<<-1<<endl;
  else
    cout<<0<<endl;

}
