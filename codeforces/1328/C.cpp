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
      string s,ans1,ans2;
      cin>>s;
      ans1+='1';
      ans2+='1';
      bool baal=false,kaal=false;
      for(long long i=1;i<n;i++)
      {
          if(s[i]=='1')
          {
              if(kaal==false){
              ans1+='0';
              ans2+='1';
              }
              else
              {
                  ans1+='1';
              ans2+='0';
              }
              kaal=true;
              baal=true;
          }
          else if(s[i]=='2')
          {
              if(baal)
              {
                  ans1+='2';
                  ans2+='0';
                  kaal=true;

              }
              else
              {
                  ans1+='1';
                  ans2+='1';
              }
          }
          else if(s[i]=='0')
          {
                ans1+='0';
                  ans2+='0';
          }

      }
      cout<<ans1<<endl;
      cout<<ans2<<endl;



    }
}
