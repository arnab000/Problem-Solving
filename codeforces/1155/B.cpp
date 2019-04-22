
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,sum=0,i;
 string s;
 cin>>n;
 cin>>s;
 int t=n-11;
 for(i=0;i<=t;i++)
 {
     if(s[i]=='8')
     {
         sum++;
     }
 }
 if(sum>(t/2))
    cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
