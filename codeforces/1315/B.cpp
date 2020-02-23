#include <bits/stdc++.h>

using namespace std;



int main()
{
 long long test ;
 cin>>test;
 while(test--)
 {
     long long x,y,z;
     cin>>x>>y>>z;
     string s;
     cin>>s;
     vector<long long >sura;
     long long arr[s.size()];
     long long sum=0;
     long long i;
     for( i=s.size()-2;i>=0;)
     {
         if(s[i]=='A')
         {
             sum+=x;

             while(s[i]=='A' && i>=0)
             {
                 arr[i]=sum;

                 i--;
             }
              // arr[i]=sum;
            // i++;


         }
         else  if(s[i]=='B')
         {
             sum+=y;

             while(s[i]=='B' &&   i>=0)
             {
                 arr[i]=sum;
                 i--;
             }
            // arr[i]=sum
             //i++;

         }


     }
     long long d;
     long long ans=0;
     bool hbe=true;
     for( d=0;d<s.size()-1;d++)
     {
         if(arr[d]<=z)
         {
             hbe=true;
             break;
         }
         //cout<<arr[d]<<" ";

     }
if(hbe)
    cout<<d+1<<endl;
else
    cout<<s.size()<<endl;

 }
}
