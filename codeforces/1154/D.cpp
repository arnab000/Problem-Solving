#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,b,a,i,j,k,seg=0;
  vector<int>sura;
  cin>>n>>b>>a;
  int h=a;
  for(i=0;i<n;i++)
  {
      cin>>k;

      sura.push_back(k);
  }
  a--;
  seg++;
  for(i=1;i<n;i++)
  {
      if(a==0 && b==0)
        break;
      if(!sura[i])
      {

           if(a==0)
            b--;
         else if(a>0 || a==h)
            a--;


      }
      else{
        if(b==0 || a==h)
            a--;

        else if(b>0)
           {
             b--;
             a++;
           }


      }
      seg++;
  }
  cout<<seg<<endl;
}
