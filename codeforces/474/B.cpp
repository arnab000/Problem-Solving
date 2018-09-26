#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l + r)/2;



        if (arr[mid-1]<x && x<=arr[mid])
            return mid;


        else if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

      else
        return binarySearch(arr, mid+1, r, x);
   }


}
int main()
{
   int x,y,sura,l,t,i,j,sum=0;


   cin>>x;
   int v[x];
   v[0]=0;
   for(i=1;i<=x;i++)
   {
       cin>>y;
       sum+=y;
       v[i]=sum;
   }
   cin>>t;
    for(i=0;i<t;i++)
   {
       cin>>y;
      sura= binarySearch(v,0,x,y) ;
      printf("%d\n",sura);


   }


}
