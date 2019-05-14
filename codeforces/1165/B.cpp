
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,k,l=0;
   vector<int>sura;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>k;
       sura.push_back(k);
   }
   sort(sura.begin(),sura.end());
   j=1;
   for(i=0;i<n;i++)
   {
//cout<<sura[i]<<endl;
       if(sura[i]>=j && i<n)
       {
           l++;
           j++;
       }
       else
       {
           //cout<<l<<endl;
           while(sura[i]<j && i<n)
           {
               i++;
           }
           if(sura[i]>=j && i<n)
           {
               l++;
               j++;
           }
       }

   }
   cout<<l<<endl;

}
