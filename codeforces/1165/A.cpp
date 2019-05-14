
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,i,j,k,l=0;
    string s;
    cin>>n>>x>>y;
   //getchar();
    cin>>s;

    for(i=n-1;i>=n-x;i--)
    {
      //  cout<<s[i];
        if(s[i]=='1')
        {
           l++;
        }
    }
   // cout<<endl;

    if(s[n-y-1]=='1')
    {
        l--;
    }
    else
    {
        l++;
    }
    cout<<l<<endl;
}
