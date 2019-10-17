#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int  arr[n+1][n+1];
   int ans=1;
   for(int i=0;i<n;i++)
   {
       if(i%2==0)
       {
           for(int j=0;j<n;j++)
           {
               arr[i][j]=ans;
               ans++;
           }
       }
       else
       {
           for(int j=n-1;j>=0;j--)
           {
               arr[i][j]=ans;
               ans++;
           }
       }
   }
    for(int i=0;i<n;i++)
   {


           for(int j=0;j<n;j++)
           {
              cout<< arr[j][i]<<" ";

           }
           cout<<endl;

}
}
