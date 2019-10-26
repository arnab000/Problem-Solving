#include<bits/stdc++.h>
using namespace std;
//int arr[1000005]
int main()
{
 int test;
 cin>>test;
 while(test--)
 {
map<int,int>arr;
     vector<int>s;

     int h=INT_MAX;
     int n,k,d,ans=0,i;
     cin>>n>>k>>d;
     for( i=0;i<n;i++)
     {
         int g;
         cin>>g;
         s.push_back(g);
     }
     for(i=0;i<d;i++)
     {
         if( arr[s[i]]==0)
         ans++;

         arr[s[i]]++;
     }
     h=ans;
     for(;i<n;i++)
     {
          if( arr[s[i]]==0)
          {
                   ans++;

          }
            arr[s[i]]++;
   arr[s[i-d]]--;
   if(arr[s[i-d]]==0)
   {
       ans--;
   }
   h=min(h,ans);

     }

     cout<<h<<endl;
 }
}
