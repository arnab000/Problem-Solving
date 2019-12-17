#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  test;
    cin>>test;
    while(test--)
    {
      string s;
      cin>>s;
      int sum=0;
      bool zero =false;
      bool four =false;
      for(int i=0;i<s.size();i++)
      {
          sum+=(s[i]-'0');
          int j=(s[i]-'0');
          if((j*10)%4==0 && j!=0)
            four=true;
          if(s[i]-'0'==0 && !zero)
            zero=true;
           else  if(s[i]-'0'==0 && zero==true )
             four=true;

      }
      if(sum==0)
        cout<<"red"<<endl;
      else if(sum%3==0 && zero && four)
        cout<<"red"<<endl;
      else
        cout<<"cyan"<<endl;
    }
}
