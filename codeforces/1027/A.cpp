#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,y,i,j,n,h,l;

 cin>>n;
 for(i=0;i<n;i++)
 { string s;

     cin>>x;
     getchar();
     getline(cin,s);
     y=x/2;
     h=0;
       l=x-1;
          for(j=0;j<y;j++)
     {
if(s[j]=='z')
{
    if(s[l]=='z' || s[l]=='x')
        h++;
}
else if(s[j]=='y')
{
    if(s[l]=='y'|| s[l]=='w')
        h++;
}
else if(s[j]=='a')
{
    if(s[l]=='a'||s[l]=='c')
        h++;
}
else if(s[j]=='b')
{
    if(s[l]=='b'|| s[l]=='d')
        h++;
}
         else if(s[j]==s[l] ||s[j]+2==s[l]|| s[j]-2==s[l])
            h++;


             l--;
     }
     if(h==y)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;


 }



}
