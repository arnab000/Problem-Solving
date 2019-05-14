
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,k,l=0;
   string sura,s;
   cin>>n;
   cin>>sura;
   j=0;
   for(i=0;i<n;i++)
   {
       //cout<<j<<endl;
       if(j%2==0)
       {
           s.push_back(sura[i]);
           k=0;

           while(sura[i]==sura[i+1] && i<n)
           {
               l++;
               k++;
               i++;

           }

           j++;

       }
       else{
          s.push_back(sura[i]);
        j++;
       }
   }

   if(s.size()%2==0)
   {
       cout<<sura.size()-s.size()<<endl;
       cout<<s<<endl;
   }
   else{
        cout<<sura.size()-s.size()+1<<endl;
    for(i=0;i<s.size()-1;i++)
    {

        cout<<s[i];
    }
   }
}
