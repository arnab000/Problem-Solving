#include <bits/stdc++.h>
using namespace std;




int main() {
  int t,n,i,j,k,m,surai,hh,x;
  cin>>n;
  char s[1000];
  vector<int>a;
    vector<int>b;
  for(i=0;i<n;i++)
    s[i]='A';
//s[n]='\0';
//cout<<s<<endl;
  for(i=0;i<n;i++)
  {
    cin>>x;
    a.push_back(x);
    b.push_back(x);

  }

  //cout<<s<<endl;
  int l=0;
  sort(a.begin(),a.end());


  for(i=0;i<n;i++)
  {
      if(a[i]!=a[i+1] && a[i]!=a[i-1])
      {
          l++;

if(l%2==0)
{
          m=a[i];


          for(j=0;j<n;j++)
          {
              if(b[j]==m)
                break;
          }

          s[j]='B';
}

      }
  }
  if(l%2==0)
  {
      cout<<"YES"<<endl;
      for(i=0;i<n;i++)
        printf("%c",s[i]);
      return 0;
  }

      hh=1;

      for(i=0;i<n;i++)
      {

          if(a[i]==a[i+1]){
          hh++;}

          if(a[i]!=a[i+1])
          {
              if(hh>2){
              for(j=0;j<n;j++)
          {
              if(b[j]==a[i])
                break;
          }

              s[j]='B';
              break;
          }
          hh=1;
          }

      }
      if(hh>2){
        cout<<"YES"<<endl;
       for(i=0;i<n;i++)
        printf("%c",s[i]);
        //return 0;
      }
      else
        cout<<"NO"<<endl;





}
