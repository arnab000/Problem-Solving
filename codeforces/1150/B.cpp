#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;
   char a;

   cin>>n;
   char sura[n][n];
   getchar();
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>sura[i][j];

       }
   }
    for(i=1;i<n-1;i++)
   {
       for(j=1;j<n-1;j++)
       {
           if(sura[i][j]=='.')
           {
               if(sura[i-1][j]=='.' && sura[i+1][j]=='.' && sura[i][j-1]=='.' && sura[i][j+1]=='.')
               {
                   sura[i][j]='#';
                   sura[i-1][j]='#';
                   sura[i+1][j]='#';
                   sura[i][j+1]='#';
                   sura[i][j-1]='#';
               }

           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(sura[i][j]=='.')
           {
               cout<<"NO"<<endl;
               return 0;
           }
       }
   }
   cout<<"YES"<<endl;
}
