#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
     int t;
     cin>>t;
     int a,b,c;

     cin>>a>>b>>c;
     string s,ans;
     cin>>s;
     int player1=0,player2=0;
     for(int i=0;i<s.size();i++)
     {
         ans.push_back(' ');
     }
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='R' && b>0)
         {
           ans[i]='P'  ;
           b--;
           player1++;
         }

           if(s[i]=='P' && c>0)
         {
           ans[i]='S'  ;
           c--;
           player1++;
         }


           if(s[i]=='S' && a>0)
         {
           ans[i]='R'  ;
           a--;
           player1++;
         }


     }
     int l;
     if(t%2==0)
     {
         l=t/2;
     }
     else
        l=(t/2)+1;

     if(player1>=l)
     {
         cout<<"YES"<<endl;
         for(int i=0;i<t;i++)
         {
             if(ans[i]==' ' && a>0)
             {
                 ans[i]='R';
                 a--;
             }
             else if(ans[i]==' ' && b>0)
             {
                 ans[i]='P';
                 b--;
             }
             else if(ans[i]==' ' && c>0)
             {
                 ans[i]='S';
                 c--;
             }
         }
         cout<<ans<<endl;
     }
     else
     cout<<"NO"<<endl;

    }
}
