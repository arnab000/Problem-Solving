#include<bits/stdc++.h>
using namespace std;
 long long arr[100009];
int main()
{


   long long m=1000000007;
     string s;
     cin>>s;

     long long ans=1;
    arr[0]=1;
    arr[1]=1;
    for(long long  i=2;i<100009;i++)
    {
        arr[i]=(arr[i-1]%m+arr[i-2]%m)%m;
    }
     for(int i=0;i<s.size();i++)
     {
         int l=0;
         while(s[i]=='n'  )
         {
             i++;
             l++;
         }
         if(s[i]=='m' || s[i]=='w')
         {
             cout<<0<<endl;
             return 0;
         }


         if(l>=2)
         ans= (ans* (arr[l]%m))%m;

     }
       for(int i=0;i<s.size();i++)
     {
         int l=0;
         while(s[i]=='u'  )
         {
             i++;
             l++;
         }



         if(l>=2)
         ans= (ans* (arr[l]%m))%m;

     }
    cout<<ans%m<<endl;




}
