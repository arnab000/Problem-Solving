#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l=0;
    string s,s1;
    getline(cin,s);
    //getchar();
   getline(cin,s1);
    int x=s.size();
    int y=s1.size();

    if(x<=y)
    {
        j=y-1;
    for(i=x-1;i>=0;i--)
    {

       if(s[i]==s1[j])
        l++;

      else if(s[i]!=s1[j])
        break;
        j--;
 // cout<<l<<endl;

    }
       // cout<<l<<endl;

    }
    else if(y<x)
    {
        j=x-1;
      // cout<<s[i]<<" "<<s1[j]<<endl;

    for(i=y-1;i>=0;i--)
    {
       if(s1[i]==s[j])
      {
         l++;
       
      }

       else if(s1[i]!=s[j])
        break;
        j--;
    }
      // cout<<l<<endl;

    }
    cout<<(x+y)-2*l<<endl;


}
