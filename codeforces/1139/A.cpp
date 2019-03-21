
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,i,j,sum=0;
  string s;

  cin>>a;
  getchar();
  getline(cin,s);

  for(i=0;i<a;i++)
  {
      b=s[i]-48;
      if(b%2==0)
        sum+=i+1;

  }
  cout<<sum<<endl;




}
