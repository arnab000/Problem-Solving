#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long test;
  cin>>test;
  while(test--)
  {
      long long n;
      cin>>n;
      string s1,s2;
      cin>>s1;
      cin>>s2;

      long long i=0;
      bool baal=false;
      bool haha =false;

      while(i<n)
      {
          if(baal==false)
          {
              if(s1[i]=='1' || s1[i]=='2')
              {
                  i++;
                  continue;
              }
              else if((s1[i]=='3' || s1[i]=='4' || s1[i]=='5' || s1[i]=='6') && (s2[i]=='1' ||s2[i]=='2'))
              {
                  haha=true;
                  break;
              }
              else
              {
                  baal=true;
                  i++;
              }

          }
          else if(baal==true)
          {
              if(s2[i]=='1' || s2[i]=='2')
              {
                  i++;
                  continue;
              }
              else if((s2[i]=='3' || s2[i]=='4' || s2[i]=='5' || s2[i]=='6') && (s1[i]=='1' ||s1[i]=='2'))
              {
                  haha=true;
                  break;
              }
              else
              {

                  baal=false;
                  i++;
              }

          }
      }
      if(haha==true || baal==false)
      {
          cout<<"NO"<<endl;

      }
      else
        cout<<"YES"<<endl;
  }

}
