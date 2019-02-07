#include<bits/stdc++.h>
using namespace std;



int main()
{
   int m,n,k,l=1,i,j;
   string sura;
   cin>>m>>n;
   getchar();
   int arr[256]={0};
   getline(cin,sura);
   for(i=0;i<m;i++)
   {
       if(sura[i]==sura[i+1])
       {
          l++;

       }
       else if(sura[i]!=sura[i+1])
       {

           arr[sura[i]]+=(l/n);
           l=1;
       }
   }
   sort(arr,arr+256);
cout<<arr[255]<<endl;


}
