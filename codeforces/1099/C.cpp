#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sura,s1,s2;
    int m=0,n,i,j,k,l=0,z=0,x=0,xy;

    getline(cin,s);
    //getchar();
    cin>>n;
    k=s.size();
    for(i=0;i<k;i++)
    {
        if(s[i]=='*' || s[i]=='?')
        {
            l++;
        }
        else
        {
            sura+=s[i];
        }
       if(s[i]=='*')
       {
           x++;
           xy=i;
       }
       }

    m=k-l;
    if(n==m)
    {
        cout<<sura<<endl;
    }
    else if(n>m)
    {
        if(x<=0)
            cout<<"Impossible"<<endl;
        else if(x>0)
        {
           s1= s.substr(0,xy);
           s2=s.substr(xy+1,k);
           int t=0;
           while(t<n-m)
           {
               s1+=s[xy-1];
               t++;
           }
           s1+=s2;
           //cout<<s1<<endl;
          for(i=0;i<s1.size();i++)
          {
              if(s1[i]=='*' || s1[i]=='?')
                continue;
              cout<<s1[i];
          }

        }
      }
      else if(n<m)
      {
          if(l<m-n)
          {
              cout<<"Impossible"<<endl;
          }
          else if(l>=m-n)
          {
              int t=0;

               for(i=0;i<s.size();i++)
          {
               if(s[i]=='*' || s[i]=='?')
               {
                  s.erase(s.begin()+(i-1));
                   t++;
               }




                if(t==m-n)
                    break;



              //cout<<s[i];
          }
              for(i=0;i<s.size();i++)
          {
              if(s[i]=='*' || s[i]=='?')
                  continue;

              cout<<s[i];
          }
          }

      }

}
